#ifndef IRPCHANDLER_H
#define IRPCHANDLER_H
#include "parser/IElectiveChoice.h"
#include "IRPCContext.h"

class IRPCHandler {

private:
    IRPCContext *context;

public:
    IRPCHandler();
	virtual int onConnect() = 0;

	virtual int disconnect() = 0;

	virtual void connect() = 0;

    virtual int handleRequest(IElectiveChoice*) = 0;

	virtual void execute() = 0;

    virtual void setRPCContext(IElectiveChoice*) = 0;
};
#endif //IRPCHANDLER_H
