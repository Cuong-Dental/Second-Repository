#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int S=0,n;
	cout << "nhap n= ";
	cin >> n;
	for (int i=1;i<=n;i++){
		int t=0;
		for (int j=2;j<=sqrt(i);j++){
		if (i%j==0)
			t++;
		}
		if (t==0&& i>1){
			cout << i << " la so nguyen to" << endl;
			S+=i;
		}
	}
	cout << S;
	return 0;
}
