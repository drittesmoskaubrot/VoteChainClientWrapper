#ifndef RPCCONTEXT_H
#define RPCCONTEXT_H
#include "IRPCContext.h"

class RPCContext : IRPCContext {


public:
    RPCContext();
	void setChoiceSparseMatrix(int IElectiveChoice);

	void createTxHandler();

	int verifyTx();

    std::string parseAndGetTxForRPC();

	void handlerSetup(int List);
};
#endif // RPCCONTEXT_H
