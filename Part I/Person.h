#ifndef PERSON_H
#define PERSON_H

using std::cin;
using std::cout;

class Person
{
private:
    std::string name;
    std::string address;
public:
    Person(){}
    Person(std::string s): name(s){}
    Person(std::string s1, std::string s2): name(s1), address(s2) {}

    std::string get_name() const {
        return name;
    }
    std::string get_address() const {
        return address;
    }

    std::istream &read(std::istream &is, Person &person)
};

#endif
