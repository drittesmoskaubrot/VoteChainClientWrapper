#ifndef ITRANSACTION_H
#define ITRANSACTION_H
#include <string>
class ITransaction {


public:
    ITransaction();
    virtual int isValid() = 0;

    virtual std::string getTx() = 0;

    virtual void setTx(std::string) = 0;
};
#endif //ITRANSACTION_H
