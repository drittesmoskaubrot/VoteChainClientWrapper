#ifndef TXCHANDLER_H
#define TXCHANDLER_H
#include "ITxHandler.h"

class TxHandler : ITxHandler {


public:
    TxHandler();
    std::string getRPCCommand();

    int validateFormat();

    int checkProtocol();

    int verifyHashSig();

	void hashProtocol();

	void createRawTx();

	void setCollection();
};
#endif //TXHANDLER_H
