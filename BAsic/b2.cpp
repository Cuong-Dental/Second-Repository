#include<iostream>
using namespace std;
int main(){
	int N;
		cout<<"Nhap N: ";
	cin>>N;
	int A[N];

	for (int i=0; i<N; i++){
		cout<<"\nA["<<i<<"]= ";
	         cin>>A[i];}
	int *P;
	P=(int*)A;
	int min=*P;
	for (int i=0; i<N; i++){
		if (*P<min)
		   min=*P;
		   P++;
	}
	cout<<"gia tri nho nhat la: "<<min;
	return 0;
	}
		  
	
