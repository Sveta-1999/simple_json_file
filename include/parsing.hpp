std::vector<Person>& readAndParse(std::vector<Person>& people) {
    // Read the JSON file
    std::string input_path;
    std::cout << "Please enter the path to the input JSON file: ";
    std::getline(std::cin, input_path);

    std::ifstream file(input_path);
    json j;
    file >> j;

   for (auto& p : j["people"]) {
        Person person;
        person.name = p["name"];
        person.age = p["age"];
        person.address.street = p["address"]["street"];
        person.address.city = p["address"]["city"];
        person.address.state = p["address"]["state"];
        person.gender = p["gender"];
        person.height = p["height"];
        person.weight = p["weight"];
        people.push_back(person);
    }

    return people;
}