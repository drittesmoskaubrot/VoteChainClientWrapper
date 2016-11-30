#ifndef ICANDIDATEFACTORY_H
#define ICANDIDATEFACTORY_H
#include "ICandidate.h"
#include <vector>
#include <string>
class ICandidateFactory {

private:
    std::vector<ICandidate> *candidates;

public:
    ICandidateFactory();
    virtual ICandidate* createCandidate(std::vector<std::string>)=0;
};
#endif // CANDIDATEFACTORY_H
