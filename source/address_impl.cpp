#include "address.hpp"
#include <string>

void Address::setStreet(std::string str) {
    street = str;
}

std::string Address::getStreet() const {
    return street;
}

void Address::setCity(std::string cit) {
    city = cit;
}

std::string Address::getCity() const {
    return city;
}

void Address::setState(std::string ste) {
    state = ste;
}

std::string Address::getState() const {
    return state;
}