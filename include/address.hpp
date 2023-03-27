// Define the Address class
struct Address {
    void setStreet(std::string str);
    std::string getStreet() const ;

    void setCity(std::string cit);
    std::string getCity() const ;

    void setState(std::string ste);
    std::string getState() const ;

private:
    std::string street;
    std::string city;
    std::string state;
};
