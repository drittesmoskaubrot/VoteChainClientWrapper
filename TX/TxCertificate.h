#ifndef TXCERTIFICATE_H
#define TXCERTIFICATE_H
#include "ITransaction.h"
#include "TxTransitionCertificateProtocol.h"

class TxCertificate : ITransaction {

public:
    TxCertificate();

    int isValid();

    std::string getTx();

	void setTx(int string);
private:
    TxTransitionCertificateProtocol *guard;
};
#endif //TXCERTIFICATE_H
