# Task :

Create client-server applications using RPC (Remote Procedure Call) protocol.

These should be the simple console applications:

1) client part can sends the following commands: "hello" and "print [x]" (where "[x]" is parameter with some text message).

2) server part can receive the commands from client and process them the following way: 

- when the "hello" command is received, it should print the "hello" string in console.

- when the "print [x]" command is received, it should print the "[x]" string in console.

 

Requirements:

- language: C++.

- the programs should be able to run on Windows system.

- the "Remote Procedure Call" protocol must be used.

- commentaries in code.

### GRPC was used, and was built locally using VCPK + VS2022 
There was no need for manual CMake build writing here, all was done by .sln


### For commands.proto separation into pb.g/cc and grpc.h/cc, the following command was used:
C:\src\vcpkg\packages\protobuf_x86-windows\tools\protobuf\protoc.exe --cpp_out=. --grpc_out=. --plugin=protoc-gen-grpc=C:\src\vcpkg\packages\grpc_x64-windows\tools\grpc\grpc_cpp_plugin.exe commands.proto
Disclaimer: for making more generic approach, the script shall be used (was a bit lazy now for it) with 
following procedures:
#####  1. Running proto function as one that was used manually.
#####  2. Copy the generated files into Client and Server project

### For more complex and generic approach for this topic, I would personally use this approach:
##### 1. Main CMake file that includes all libs and dependacies as needed
##### 2. As the vcpk was used here, CMake could just simply include them ^^^^
##### 3. Proto file would be separated as one, and CMake would run the script for generating
##### needed pb.h/cc and grpc.h/cc files, thus copying them to needed projects.
##### 4. As stated in Server implementation, here would be an overkill, but the adaptor pattern 
##### mixed with command objects could be used to make more generic approach to this type of communication.

