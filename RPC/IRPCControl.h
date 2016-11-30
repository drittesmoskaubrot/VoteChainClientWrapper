#ifndef IRPCCONTROL_H
#define IRPCCONTROL_H
#include "IRPCHandler.h"

class IRPCControl {

private:
    IRPCHandler *handler;

public:
    IRPCControl();
	virtual void createHandler() = 0;

	virtual void connectToHandler() = 0;

    virtual void issueRequest(IElectiveChoice*) = 0;
};
#endif // IRPCCONTROL_H
