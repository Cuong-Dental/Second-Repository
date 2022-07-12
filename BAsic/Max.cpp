#include <iostream>
using namespace std;

void Max_Compare(){
	int a,b,c;
	cin >>a >>b >>c;
	if(a>b && a>b){
		cout << "Max is a= "<< a;
	}else if(b>c){
		cout << "Max is b= "<< b;
	}else {
		cout <<"Max is c= "<< c;
	}
}

int main(){
	Max_Compare();
	return 0;
}
//
//void Max_Compare(){
//	int a,b,c;
//	cin >>a >>b >>c;
//	if(a>b && a>b){
//		cout << "Max is a= "<< a;
//	}else if(b>c){
//		cout << "Max is b= "<< b;
//	}else {
//		cout <<"Max is c= "<< c;
//	}
//}
