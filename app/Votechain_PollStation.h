#ifndef VOTECHAIN_POLLSTATION_H
#define VOTECHAIN_POLLSTATION_H
#include <iostream>
#include <sstream>
#include "IVotechain_PollStation.h"
#include "factory/CandidateFactory.h"

class Votechain_PollStation :public IVotechain_PollStation {


public:
    Votechain_PollStation();
	void init();

	int verifyCandidateList();

	void populateCandidateList();

    std::vector<ICandidate> getCandidateList();

	void displayCandidates();

	void addElectiveChoice();

    void undoAddElectiveChoice(ICandidate *candidate);

    void removeElectiveChoice(ICandidate *candidate);

	void submit();

	void exitPoll();

	void newPoll();
};
#endif //VOTECHAIN_POLLSTATION_H
