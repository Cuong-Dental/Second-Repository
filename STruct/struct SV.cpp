#include <iostream>

using namespace std;

struct Student{
	int number;
	string fullname, birthday, gender;
	float math,literature;
	void getImfor(){
		cout << "No."; 
		cin >> number;
		cout << "Fullname: ";
		cin >> fullname;
//		getline(cin,fullname);
        cout << "Gender: ";
        cin >> gender;
		cout << "Birthday: ";
		cin >> birthday;
		cout << "Math score: ";
		cin >> math;
		cout << "Literature score: ";
		cin >> literature;
	}
	int display(){
		cout << "No." << number << endl;
		cout << "Fullname: " << fullname << endl;
		cout << "Gender:" << gender << endl;
		cout << "Birthday: " << birthday << endl;
		cout << "Average score: " << (float)(math+literature)/2 << endl;
		cout << endl;
	}
};

int main(){
	Student s[5];
	for (int i=0;i<5;i++){
		s[i].getImfor();
	}
	cout << "************************************" << endl;
	for (int i=0;i<5;i++){
		s[i].display();
	}
	return 0;
}
