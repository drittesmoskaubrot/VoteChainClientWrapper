#ifndef CANDIDATE_H
#define CANDIDATE_H
#include "ICandidate.h"

class Candidate : public ICandidate {


public:
    Candidate();

    std::string getName();

    void setName(std::string n);

    std::string getSurname();

    void setSurname(std::string s);

    std::string getParty();

    void setParty(std::string);

    int getConstituency();

    void setConstituency(int c);

    std::string getResidence();

    void setResidence(std::string r);

    std::string getOccupation();

    void setOccupation(std::string o);

    void setPathToImage(std::string i);

    std::string getPathToImage();

 private:
      std::string path;
};
#endif // CANDIDATE_H
