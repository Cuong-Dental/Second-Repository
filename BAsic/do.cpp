#include <iostream>

using namespace std;

//class Khachhang{
//private:
//	string ten;
//	int tuoi;
//	string *monhayan;
//public:
//	Khachhang(){
//		
//	}
//	Khachhang(string ten, int tuoi, string monhayan){
//		this->ten= ten;
//		this->tuoi= tuoi;
//		this->monhayan= monhayan;
//	}
////	friend ostream& operator <<(ostream &os, Khachhang KH){
////		os<< "====================\n";
////		os<< "Ten: " << KH.ten<< endl;
////		os<< "Tuoi: " << KH.tuoi<< endl;
////		os<< "Monhayan: "<< KH.monhayan<< endl;
////		cout << "=====================\n";
////	}
//};
//
//int main(){
//	Khachhang A("Nam",18,"Cakho");
//	Khachhang B;
////	cout << A<<endl;
//	B=A;
////	cout << B<<endl;
//	return 0;
//}

//int test(int *ptr){
//	ptr= NULL;
//	*ptr=10;
//	return *ptr;
//	}
//int main(){
//	int a;
//	cin>>a;
//	int *ptr;
//	ptr= &a;
//	cout << ptr << endl;
//	cout << test(&a)<< endl;
//	cout << &a <<endl;
//	cout << ptr<< endl;
//	cout << a<< endl;
//	return 0;
//}

#include <cstring>
int main(){
	char str1[]= "Xin chao cac ban!!!";
	char str2[]= "Chao tui may";
	int len1= strlen(str1);
	int len2= strlen(str2);
	cout << "Do dai 1= " << len1 << endl;
	cout << "Do dai 2= " << len2 << endl;
	return 0;
}
