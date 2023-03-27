std::vector<Person>& readAndParse(std::vector<Person>& people) {
    // Read the JSON file
    std::string input_path;
    std::cout << "Please enter the path to the input JSON file: ";
    std::getline(std::cin, input_path);

    std::ifstream file(input_path);
    if (file.is_open()) {
        std::cout << "File is open" << std::endl;
    } else {
        std::cout << "File is not open" << std::endl;
    }
    json j;
    file >> j;

  for (auto& p : j["people"]) {
    Person person;
    person.setName(p["name"]);
    person.setAge(p["age"]);

    Address address;
    address.setStreet(p["address"]["street"]);
    address.setCity(p["address"]["city"]);
    address.setState(p["address"]["state"]);

    person.setAddress(address);

    person.setGender(p["gender"]);
    person.setHeight(p["height"]);
    person.setWeight(p["weight"]);

    people.push_back(person);
}

    return people;
}