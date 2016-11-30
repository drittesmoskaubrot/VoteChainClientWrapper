#include "Votechain_PollStation.h"


void Votechain_PollStation::init() {
	// TODO - implement Votechain_PollStation::init
	throw "Not yet implemented";
}

int Votechain_PollStation::verifyCandidateList() {
	// TODO - implement Votechain_PollStation::verifyCandidateList
	throw "Not yet implemented";
}

void Votechain_PollStation::populateCandidateList() {
    /*
     *   #-----> testing framework flow
     *      create 5 candidates with factory
     *
     *  Normal flow is get string vector with candidate details and
     *  and pass it to factory each return will be added to to ICandidate vector
     */

    std::vector<std::string> c1 = { "name1","surname1","party1","constituency1","residence1","occupation1"};
    std::vector<std::string> c2 = { "name2","surname2","party2","constituency2","residence2","occupation2"};
    std::vector<std::string> c3 = { "name1","surname3","party3","constituency3","residence3","occupation3"};
    std::vector<std::string> c4 = { "name1","surname4","party4","constituency4","residence4","occupation4"};
    std::vector<std::string> c5 = { "name1","surname5","party5","constituency5","residence5","occupation5"};

    this->factory = new CandidateFactory();

    ICandidate *candidate1 = this->factory->createCandidate(c1);
    ICandidate *candidate2 = this->factory->createCandidate(c2);
    ICandidate *candidate3 = this->factory->createCandidate(c3);
    ICandidate *candidate4 = this->factory->createCandidate(c4);
    ICandidate *candidate5 = this->factory->createCandidate(c5);
    candidates->push_back(*candidate3);
    candidates->push_back(*candidate2);
    candidates->push_back(*candidate1);
    candidates->push_back(*candidate5);
    candidates->push_back(*candidate4);

}

std::vector<ICandidate> Votechain_PollStation::getCandidateList() {
	// TODO - implement Votechain_PollStation::getCandidateList
	throw "Not yet implemented";
}

void Votechain_PollStation::displayCandidates() {
	// TODO - implement Votechain_PollStation::displayCandidates
	throw "Not yet implemented";
}

void Votechain_PollStation::addElectiveChoice() {
	// TODO - implement Votechain_PollStation::addElectiveChoice
	throw "Not yet implemented";
}

void Votechain_PollStation::undoAddElectiveChoice(ICandidate *candidate) {
	// TODO - implement Votechain_PollStation::undoAddElectiveChoice
	throw "Not yet implemented";
}

void Votechain_PollStation::removeElectiveChoice(ICandidate *candidate) {
	// TODO - implement Votechain_PollStation::removeElectiveElectiveChoice
	throw "Not yet implemented";
}

void Votechain_PollStation::submit() {
	// TODO - implement Votechain_PollStation::submit
	throw "Not yet implemented";
}

void Votechain_PollStation::exitPoll() {
	// TODO - implement Votechain_PollStation::exitPoll
	throw "Not yet implemented";
}

void Votechain_PollStation::newPoll() {
	// TODO - implement Votechain_PollStation::newPoll
	throw "Not yet implemented";
}
