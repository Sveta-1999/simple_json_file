void process(std::vector<Person> people) {
    // Calculate the average age of the people in the dataset
    double total_age = 0;
    for (auto& p : people) {
        total_age += p.age;
    }
    double avg_age = total_age / people.size();

    // Find the names of people with ages above the average
    std::vector<std::string> above_avg;
    for (auto& p : people) {
        if (p.age > avg_age) {
            above_avg.push_back(p.name);
        }
    }

     // Output the results to JSON
    json output;
    output["average_age"] = avg_age;
    output["above_average"] = above_avg;

    std::ofstream outfile;
    outfile.open("output.json");

    if (outfile.is_open()) {
        outfile << output.dump();
        outfile.close();
        std::cout << "File written successfully!\n";
    } else {
        std::cerr << "Error opening file.\n";
    }
}