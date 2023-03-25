# Sample_JSON_File


<b> Design Choices: <b/>

For parsing and processing JSON data, I have used the nlohmann/json library in C++. This is a popular and well-documented library that provides a simple and efficient way to work with JSON data. The library provides various methods for parsing and serializing JSON data, as well as manipulating and accessing JSON objects.

I have created a C++ data structure named "Person" to store the parsed information from the sample JSON file. This data structure contains member variables such as name, age, address, gender, height, and weight, which are extracted from the JSON file.

To calculate the average age of people in the dataset, I have used a loop to iterate over all the "Person" objects in the data structure and added up their ages. Then, we have divided the total age by the number of people to get the average age.

Finally, I have used the nlohmann/json library to output a new JSON file containing the calculated average age and the names of people with ages above the average.

Instructions on How to Compile and Run the Program:

To compile the program, you need to have the nlohmann/json library installed on your system. You can download the library from the following link: https://github.com/nlohmann/json.

Once you have downloaded the library, extract it to a directory of your choice. Then, navigate to the directory where you have saved the source code for the program and open a terminal window.

To use Makefile, navigate to the directory containing the Makefile and run the command make. This will execute the default all target and generate the executable file main. To run the program, use the command make run. To remove all generated files, use the command make clean.
