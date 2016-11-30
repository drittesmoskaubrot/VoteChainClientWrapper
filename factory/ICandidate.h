#ifndef ICANDIDATE_H
#define ICANDIDATE_H
#include <string>

class ICandidate {

private:
    std::string name;
    std::string surname;
    std::string party;
	int constituency;
    std::string residence;
    std::string occupation;


public:
    virtual std::string getName(){
        return this->name;
    }

    virtual void setName(std::string n){
        this->name = n;
    }

    virtual std::string getSurname(){
       return this->surname;
    }

    virtual void setSurname(std::string n){
        this->surname = n;
    }

    virtual std::string getParty(){
        return this->party;
    }

    virtual void setParty(std::string p){
        this->party = p;
    }

    virtual int getConstituency(){
        return this->constituency;
    }

    virtual void setConstituency(int Integer){
        this->constituency = Integer;
    }

    virtual std::string getResidence(){
        return this->residence;
    }

    virtual void setResidence(std::string r){
        this->residence = r;
    }

    virtual std::string getOccupation(){
        return this->occupation;
    }

    virtual void setOccupation(std::string o){
        this->occupation = o;
    }
};
#endif //ICANDIDATE
