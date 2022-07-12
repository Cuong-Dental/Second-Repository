#include <iostream>

using namespace std;

int main(){
	float *ptr1= NULL;
	if(ptr1){
		cout << "not NULL" << endl;
	}
	else {
		cout << "NULL" << endl;
	}
	int *ptr= new int;
	if(ptr != NULL){
		cout << "Du vung nho"<< endl;
	}else {
		cout << "Khong du vung nho" << endl;
	}
	*ptr= 2001;
	float *ptr2= new float;
	*ptr2= 3.2;
	cout << *ptr + *ptr2 << endl;
	cin >> *ptr;
	cout << *ptr + *ptr2 << endl;
	cout << (*ptr) << endl;
	delete ptr;
	delete ptr2;
	int *ptra= new int [3];
	for(int i=0; i<3; i++){
		cout << "Nhap " <<i<<": ";
		cin >> ptra[i];
	}
	for (int i=0; i<3; i++){
		cout << *ptra;
	}
	delete []ptra;
	return 0;
}
