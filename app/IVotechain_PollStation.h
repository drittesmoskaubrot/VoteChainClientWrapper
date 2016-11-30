#ifndef IVOTECHAIN_POLLSTATION_H
#define IVOTECHAIN_POLLSTATION_H
#include <vector>
#include "factory/ICandidateFactory.h"
#include "IRPCConnect.h"
#include "RPC/IRPCControl.h"
#include "parser/IElectiveChoice.h"

class ICandidate;

class IVotechain_PollStation {



public:
    ICandidateFactory *factory;
    ICandidate *candidate;
    std::vector<ICandidate> *candidates;
    IElectiveChoice *electiveChoice;
    IRPCConnect *connection;
    IRPCControl *creates;

    IVotechain_PollStation();

    virtual void init() = 0;

	virtual int verifyCandidateList() = 0;

	virtual void populateCandidateList() = 0;

    virtual std::vector<ICandidate> getCandidateList() = 0;

	virtual void displayCandidates() = 0;

	virtual void addElectiveChoice() = 0;

    virtual void undoAddElectiveChoice(ICandidate*) = 0;

    virtual void removeElectiveChoice(ICandidate*) = 0;

	virtual void submit() = 0;

	virtual void exitPoll() = 0;

	virtual void newPoll() = 0;
};
#endif //IVOTECHAIN_POLLSTATION_H
