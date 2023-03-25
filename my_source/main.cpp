#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <vector>


using json = nlohmann::json;
#include "../my_include/parsing.hpp"
#include "../my_include/processing.hpp"


int main() {
    std::vector<Person> people;
    std::vector<Person> vec = readAndParse(people);
    process(vec);

    return 0;
}
      