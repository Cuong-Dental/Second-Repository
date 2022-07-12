#include <iostream>
using namespace std;
	int tongmang(int n){
		int a[n],S=0;
		for (int i=0;i<n;i++){
			cout << "phan tu a["<<i<<"]= ";
			cin >> a[i];
		}
		for (int i=0;i<n;i++){
			S+=a[i];
	}
		cout << "tong mang la: "<< S;
		return S;
	}	
	int main(){
		int n,S;
		cout << "nhap n= ";
		cin >> n;
		tongmang(n);
		return 0;
	}

