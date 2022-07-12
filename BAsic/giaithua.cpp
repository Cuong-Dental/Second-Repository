#include <iostream>
using namespace std;
int main(){
	int n,P=1;
	cout << "n= ";
	cin >>n;
	for (int i=1;i<=n;i++)
	P*=i;
	cout << n << "!= "<< P;
	return 0;
}
