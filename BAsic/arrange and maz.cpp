#include <iostream>

using namespace std;

int arrange(int a[100],int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(a[i]>a[j]){
				int c=a[i];
				    a[i]=a[j];
				    a[j]=c;
			}
		}
	}
	cout << "array after arranging is: " << endl;
	for (int i=0;i<n;i++)
	cout << "a["<<i<< "]= " << a[i] << endl;
 return 0;
}

int MAX(int a[100],int n){
	int max=a[0];
	for (int i=0;i<n;i++){
		if(a[i]>=max)
		max=a[i];
	}
	return max;
}
 
int main (){
	int n;
	cout << "n= ";
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cout << "nhap a["<<i<<"]= ";
		cin >> a[i];
	}
	arrange(a,n);
	cout << "max value of array= "<< MAX(a,n);
	return 0;
}
