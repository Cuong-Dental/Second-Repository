#include <iostream>

using namespace std;

class Account {
    int id;
    string name;
    int balance = 0;
public:
    Account(int id, string name) {
        this->id = id;
        this->name = name;
    }
    Account(int id, string name, int balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    int getId() {
        return id;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    int getBalance() {
        return balance;
    }
    void deposit(int amount) {
        this->balance += amount;
    }
    void withdraw(int amount) {
        if (this->balance >= amount) {
            this->balance -= amount;
        }
        else {
            cout << "That amount exceeds your current balance." << endl;
        }
    }
    void display() {
        cout << "Id: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Balance: " << getBalance() << endl;
    }
};

int main() {
    Account acc1(1000, "Cuong", 1000);
    acc1.display();
    acc1.withdraw(2100);
    acc1.deposit(3000);
    acc1.withdraw(2100);
    acc1.display();
    return 0;
}