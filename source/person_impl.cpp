#include "person.hpp"

void Person::setName(std::string nam) {
    name = nam;
}

std::string Person::getName() const {
    return name;
}

void Person::setAge(int ag) {
    age = ag;
}

int Person::getAge() const {
    return age;
}

void Person::setAddress(Address adr) {
    address.setCity(adr.getCity());
    address.setState(adr.getState());
    address.setStreet(adr.getStreet());
}

Address Person::getAddress() const {
    return address;
}

void Person::setGender(std::string gend) {
    gender = gend;
}

std::string Person::getGender() const {
    return gender;
}

void Person::SetHeight(int heigh) {
    height = heigh;
}
    
int Person::getHeight() const {
    return height;
}

void Person::setWeight(int weigh) {
    weight = weigh;
}

int Person::getWeight() const {
    return weight;
}