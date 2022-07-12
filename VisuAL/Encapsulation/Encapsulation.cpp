// Encapsulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Person
{
private:
    int id;
    string name;
    int age;
    string address;
public:
    Person(int id, string name, int age, string address)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
    }
    int setId()
    {
        return id;
    }
    string  setName()
    {
        return name;
    }
    int setAge()
    {
        return age;
    }
    string setAddress()
    {
        return address;
    }
};
int main()
{
    Person p(10, "Quynh", 18, "Ha Noi");
    cout << "Id = " << p.setId() << endl;
    cout << "Name = " << p.setName() << endl;
    cout << "Age = " << p.setAge() << endl;
    cout << "Address = " << p.setAddress() << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
