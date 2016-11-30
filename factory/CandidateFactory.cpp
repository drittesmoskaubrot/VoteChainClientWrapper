#include "CandidateFactory.h"
#include "Candidate.h"

class Candidate;

ICandidate* CandidateFactory::createCandidate(std::vector<std::string> c) {

    ICandidate *candidate = new Candidate();
    candidate->setName(c.at(0));
    candidate->setSurname(c.at(1));
    candidate->setParty(c.at(2));
    candidate->setConstituency(1);
    candidate->setResidence(c.at(4));
    candidate->setOccupation(c.at(5));
    dynamic_cast<Candidate*>(candidate)->setPathToImage("test/Image");


    return candidate;
}
