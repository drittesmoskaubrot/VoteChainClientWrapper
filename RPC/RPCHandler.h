#ifndef RPCHANDLER_H
#define RPCHANDLER_H
#include "IRPCHandler.h"

class RPCHandler : IRPCHandler {


public:
    RPCHandler();
	int onConnect();

	int disconnect();

	void connect();

    int handleRequest(IElectiveChoice *choice);

    void setRPCContext(IElectiveChoice *choice);

	void execute();
};
#endif //RPCHANDLER_H
