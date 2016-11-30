#ifndef RPCCONTROL_H
#define RPCCONTROL_H
#include "IRPCControl.h"

class RPCControl : IRPCControl {


public:
    RPCControl();
	void createHandler();

	void connectToHandler();

    void issueRequest(IElectiveChoice*ch);
};
#endif //RPCCONTROL
