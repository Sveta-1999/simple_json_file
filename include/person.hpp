#ifndef PERSON_HPP
#define PERSON_HPP

#include "address.hpp"

// Define a data structure to store the parsed information
struct Person {
    void setName(std::string nam);
    std::string getName() const;

    void setAge(int ag);
    int getAge() const;

    void setAddress(Address adr);
    Address getAddress() const;

    void setGender(std::string gend);
    std::string getGender() const;

    void setHeight(int heigh);
    int getHeight() const;

    void setWeight(int weigh);
    int getWeight() const;

private:
    std::string name;
    int age;
    Address address;
    std::string gender;
    int height;
    int weight;
};

#endif //PERSON_HPP