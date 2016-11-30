#ifndef TXTRANSITIONPROTOCOLCERTIFICATE_H
#define TXTRANSITIONPROTOCOLCERTIFICATE_H
#include <cstdint>


class TxTransitionCertificateProtocol {

private:
    uint8_t verNumber;
    uint8_t protoNumber;
    uint8_t sendToAddress;
    uint8_t sendFromAddress;
    uint8_t SparseMatrice;
    uint8_t prevHash;
    uint8_t certHash;
    uint8_t constituencyID;
    uint8_t merkelTree;

public:
    uint8_t getVerNumber();

    uint8_t getProtoNumber();

    uint8_t getSendToAddress();

    uint8_t getSendFromAddress();

    uint8_t getSparseMatrice();

    uint8_t getPrevHash();

    uint8_t getCertHash();

    uint8_t getConstituencyID();

    uint8_t getMerkelTree();
};
#endif //TXTRANSITIONPROTOCOLCERTIFICATE_H
