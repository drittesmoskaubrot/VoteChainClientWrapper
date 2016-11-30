#ifndef IRPCCONNECT_H
#define IRPCCONNECT_H

#include "RPC/IRPCControl.h"

class IRPCConnect {

private:
     IRPCControl *control;

public:
     IRPCConnect();
     virtual void RPC_Init(int IElectiveChoice) = 0;
};
#endif //IRPCCONNECT_H
