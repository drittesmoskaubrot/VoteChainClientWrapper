#ifndef IRPCCONTEXT_H
#define IRPCCONTEXT_H
#include "TX/ITxHandler.h"
#include <vector>
class IRPCContext {

private:
    ITxHandler *handler;
    std::vector<std::string> choiceSparseMatrice;

public:
    IRPCContext();
	virtual void setChoiceSparseMatrix(int IElectiveChoice) = 0;

	virtual void createTxHandler() = 0;

	int verifyTx();

    virtual std::string parseAndGetTxForRPC() = 0;

	virtual void handlerSetup(int List) = 0;
};
#endif // IRPCCONTEXT_H
