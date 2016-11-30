#ifndef TXMESSAGE_H
#define TXMESSAGE_H
#include "ITransaction.h"
class TxMessage: ITransaction {


public:
    TxMessage();
	int isValid();

    std::string getTx();

	void setTx(int string);
};
#endif //TXMESSAGE_H
