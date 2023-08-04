/*
    IMPLEMENTATION DONE BY LUKA RADUNOVIC
*/
#include <iostream>
#include <memory>
#include <grpcpp/grpcpp.h>
#include "../commands.pb.h"
#include "../commands.grpc.pb.h"


using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpcdemo::CommandRequest;
using grpcdemo::CommandResponse;
using grpcdemo::CommandService;

            //Making final class of the CommandService so it prevents further overridde.
/*  ***As stated by TASK, Server implementation should be like: 
    2) server part can receive the commands from client and process them the following way :

    -when the "hello" command is received, it should print the "hello" string in console.
    
    - when the "print [x]" command is received, it should print the "[x]" string in console. 
    
    ****For the simplicity of testing, Client.exe console application was made in such a way
    *   that the hello and print with parameter [x] is sent one followed by other when starting
    * Client application.
    * 
    *Override of the CommandService class and implementation of the commands is done 
    * with if/else due to simplicity here. Could be done on multiple ways
    * --For more complex commands with multiple parameters, this should be done
    * with custom command objects, ported by some adaptor pattern which
    * will port command and parameters to its object and the object shall continue
    * its work depending of parameters and so - here is just the simple example
    * that shows working RPC.
    * 
    * As for the simple implementation - 
    * If hello -> executes simple cout with text
    * if "print [<parameter>]" -> executes cout with parameter.toString out
    * else sends error with text.
    *
    */

class CommandServiceImpl final : public CommandService::Service {
    grpc::Status ExecuteCommand(ServerContext* context, const CommandRequest* request, CommandResponse* response) override {
        if (request->command() == "hello") {
            std::cout << "Received 'hello' command from client." << std::endl;
        }
        //For print command, for the sake of testing the request->parameter() is not added only as
        //written in task doc ( std::cout << request->parameter() << std::endln; ), 
        // but rather it was added with "Received 'print' command with parameter:"
        //due to prettier look in terminal:))
        else if (request->command() == "print") {
            std::cout << "Received 'print' command with parameter: " << request->parameter() << std::endl;
        }
        else {
            std::cerr << "Unknown command received." << std::endl;
        }

        response->set_result("Command processed.");
        return grpc::Status::OK;
    }
};

/*
* Function that:
* 1. Takes server adress with port 0.0.0.0:50051 - (ip: 0.0.0.0 with listening on port 50051)
* 2. Creates service and server
* 3. Makes server to listen to ip addr with mentioned port
* 4. Registers the service and put the server on wait to listen to client messages.
*/
void RunServer() {
    std::string server_address("0.0.0.0:50051"); //Adding Server address
    CommandServiceImpl service; //Create the service implementation 

    ServerBuilder builder; // Create a ServerBuilder
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials()); //Adding the listening port
    builder.RegisterService(&service); //Register the service implementation

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    server->Wait();
}

int main() {
    RunServer();
    return 0;
}