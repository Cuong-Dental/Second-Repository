#include<iostream >
using namespace std;
int main (){
int i=1, S=0, n;
cin >> n;
do {
	S=S+i;
	i++;
	} while(i<n);
cout << "tong="<< S;
return 0;
}
