#ifndef ITXCHANDLER_H
#define ITXCHANDLER_H
#include "ITransaction.h"
#include "string"
class ITxHandler {

private:
    ITransaction *txTrans;
    ITransaction *txRaw;
    ITransaction *collection;

public:
    ITxHandler();
    virtual std::string getRPCCommand() = 0;

    virtual int validateFormat() = 0;

    virtual int checkProtocol() = 0;

    virtual int verifyHashSig() = 0;

	virtual void hashProtocol() = 0;

	void createRawTx();

	void setCollection();
};
#endif //ITXHANDLER_H
