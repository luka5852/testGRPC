/*
    IMPLEMENTATION DONE BY LUKA RADUNOVIC
*/
#include <iostream>
#include <memory>
#include <grpcpp/grpcpp.h>
#include "../commands.grpc.pb.h"

using grpcdemo::CommandRequest;
using grpcdemo::CommandResponse;
using grpcdemo::CommandService;
using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

class CommandClient {
public:
    CommandClient(std::shared_ptr<Channel> channel) : stub_(CommandService::NewStub(channel)) {}

    std::string ExecuteCommand(const std::string& command, const std::string& parameter) {
        CommandRequest request;
        request.set_command(command);
        request.set_parameter(parameter);

        CommandResponse response;
        ClientContext context;

        Status status = stub_->ExecuteCommand(&context, request, &response);

        if (status.ok()) {
            return response.result();
        }
        else {
            return "RPC failed.";
        }
    }

private:
    std::unique_ptr<CommandService::Stub> stub_;
};


/*
* For the sake of testing, this simple procedure for command execution was used:
* 1. Sending pure hello command from the console app
* 2. Seding command with parameter for print [x] from console app
*/
int main() {
    //First by first, client is made with credentials on port 50051
    CommandClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

    std::cout << "Sending 'hello' command." << std::endl;
    client.ExecuteCommand("hello", "");

    std::cout << "Sending 'print' command with parameter 'Hello, gRPC!'" << std::endl;
    client.ExecuteCommand("print", "Hello, gRPC!"); // "Hello, gRPC!"is seen here as parameter x

    return 0;
}