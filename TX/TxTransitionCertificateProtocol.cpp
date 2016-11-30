#include "TxTransitionCertificateProtocol.h"

uint8_t TxTransitionCertificateProtocol::getVerNumber() {
	return this->verNumber;
}

uint8_t TxTransitionCertificateProtocol::getProtoNumber() {
	return this->protoNumber;
}

uint8_t TxTransitionCertificateProtocol::getSendToAddress() {
	return this->sendToAddress;
}

uint8_t TxTransitionCertificateProtocol::getSendFromAddress() {
	return this->sendFromAddress;
}

uint8_t TxTransitionCertificateProtocol::getSparseMatrice() {
	// TODO - implement TxTransitionCertificateProtocol::getSparseMatrice
	throw "Not yet implemented";
}

uint8_t TxTransitionCertificateProtocol::getPrevHash() {
	return this->prevHash;
}

uint8_t TxTransitionCertificateProtocol::getCertHash() {
	return this->certHash;
}

uint8_t TxTransitionCertificateProtocol::getConstituencyID() {
	return this->constituencyID;
}

uint8_t TxTransitionCertificateProtocol::getMerkelTree() {
	return this->merkelTree;
}
