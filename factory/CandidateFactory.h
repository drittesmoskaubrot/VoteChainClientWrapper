#ifndef CANDIDATEFACTORY_H
#define CANDIDATEFACTORY_H
#include "ICandidateFactory.h"

class CandidateFactory :public ICandidateFactory {


public:
    CandidateFactory();
    virtual ICandidate* createCandidate(std::vector<std::string> c);
};
#endif //CANDIDATEFACTORY_H
