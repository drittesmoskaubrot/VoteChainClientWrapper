#ifndef TXRAW_H
#define TXRAW_H
#include "ITransaction.h"
class TxRaw : ITransaction {


public:
    TxRaw();
    int isValid();

    std::string getTx();

	void setTx(int string);
};
#endif //TXRAW_H
