#ifndef IELECTIVECHOICE_H
#define IELECTIVECHOICE_H
#include "factory/ICandidate.h"
#include <vector>

class IElectiveChoice {

private:
    IElectiveChoice();
    ICandidate *candidate;

public:
    virtual void addCandidate(int,ICandidate*) = 0;

    virtual void removeCandidate(ICandidate*) = 0;

    virtual ICandidate* getCandidateByChoice(int) = 0;

    virtual std::vector<ICandidate> getCandidates() = 0;
};
#endif // IELECTIVECHOICE_H
