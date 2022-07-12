#include <iostream>

using namespace std;

class Employee {
private:
    string lastName;
	string firstName;
	static int count;
public:
	Employee(string last, string first){
		lastName= last;
		firstName = first;
	}
	~Employee(){
	}
	string getLastName(){
		return lastName;
	}
	string getFirstName(){
		return firstName;
	}
	static int getCount(){
		return count;
	}
};
    int Employee :: count =0;

int main(){
	Employee Emp1("Nguyen ", "Cuong");
//	count++;
	Employee Emp2("Nguyen ", "Huy");
//	count++;
	cout << Emp1.getLastName() << Emp1.getFirstName() << endl;
	cout << Employee::getCount() << endl;
	return 0;
}
