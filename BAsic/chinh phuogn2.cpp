#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a[5]={5,4,16,1,3};
		cout << "So chinh phuong la: ";
	for (int i=0;i<5;i++){
		if ((int)sqrt(a[i])*(int)sqrt(a[i])==a[i])
		cout<< a[i] << " ";
	}
	return 0;
}
