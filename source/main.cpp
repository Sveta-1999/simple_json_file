#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <vector>


using json = nlohmann::json;
#include "address.hpp"
#include "person.hpp"
#include "parsing.hpp"
#include "processing.hpp"



int main() {
    std::vector<Person> people;
    std::vector<Person> vec = readAndParse(people);
    process(vec);

    return 0;
}
      