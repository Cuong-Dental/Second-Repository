#include<iostream>
using namespace std;
    int total(int *p,int n){
    	int S=0;
    	for (int i=0;i<n;i++){
    		S+=(*p);
    		p++;
		}
		return S;
	}
int main (){
	int n;
	cout << "n= ";cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
	cout <<"nhap a["<<i<<"]: ";
	cin >> a[i];	
	}
	cout << "total= " << total((int*)&a,n);
	cout << "Nguyen Duc Cuong" << endl;
	return 0;
}
