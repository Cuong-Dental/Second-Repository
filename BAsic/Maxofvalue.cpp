#include <iostream>
using namespace std;
int Maxofarray(int n, int a[1000]){
	int M=a[0];
	for (int i=0;i<n;i++){
		if(M<=a[i])
		M=a[i];
	}
	return M;
}
int main (){
	int n1,n2;
	int a1[n1],a2[n2];
	cout << "nhap n1= ";
	cin >>n1;
	for (int i=0;i<n1;i++){
		cout << "nhap phan tu a1["<< i << "]: ";
		cin >> a1[i];
	}
	cout << "nhap n2= ";
	cin >> n2;
	for (int i=0;i<n2;i++){
		cout << "nhap phan tu a2["<< i << "]: ";
		cin >> a2[i];
	}
	cout << "Max value of a1 is " << Maxofarray(n1,a1) << endl << "Max value of a2 is " << Maxofarray(n2,a2);

}
