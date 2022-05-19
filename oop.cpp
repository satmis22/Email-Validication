#include <iostream>
using std::string;

class Employee
{
private: 
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void introduceYourself()
    {
        std::cout << "Name -" << Name << std::endl;
        std::cout << "Company -" << Company << std::endl;
        std::cout << "Age -" << Age << std::endl;
    }
    Employee(string name, string company, int age)
{
    Name = name;
    Company = company;
    Age = age;
}
};

int main()
{
    Employee employee1 = Employee("Satvik", "Amazon", 20);
    employee1.introduceYourself();

    Employee employee2 = Employee("Shubham", "Google", 19);
    employee2.introduceYourself();
}