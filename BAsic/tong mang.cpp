#include <iostream>
using namespace std;
int main (){
	int a[5]={1,6,4,8,3}, S=0;
	for (int i=0;i<5;i++){
		S+=a[i];
	}
	cout << "tong cua mang la: " << S;
	return 0;
}
