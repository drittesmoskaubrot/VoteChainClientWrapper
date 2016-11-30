#ifndef ELECTIVECHOICE_H
#define ELECTIVECHOICE_H
#include "IElectiveChoice.h"

class ElectiveChoice :public IElectiveChoice {


public:
    ElectiveChoice();
    void addCandidate(int ch, ElectiveChoice::ICandidate *c);

    void removeCandidate(ICandidate* c);

    ICandidate* getCandidateByChoice(int c);

    std::vector<ICandidate> getCandidates();
};
#endif //ELECTIVECHOICE_H
