#include <iostream>

using namespace std;

int total(int a[][100],int m, int n){
	int S=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			S+=a[i][j];
		}
	}
	return S;
}

int MAX(int a[][100], int m, int n){
	int max=a[0][0];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if(a[i][j]>max)
			max=a[i][j];
		}
	}
	return max;
}
int main (){
	int m,n;
	cout << "input m & n= ";
	cin >> m >> n;
	int a[100][100];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cout << "a["<<i<< "]["<<j<<"]= ";
			cin >> a[i][j];
		}
	}
	cout << "total of array= " << total(a,m,n)<< endl;
	cout << "max value of array= "<< MAX(a,m,n);
	return 0;
}
