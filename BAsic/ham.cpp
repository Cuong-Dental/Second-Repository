#include <iostream>
using namespace std;
int main(){
int a[5]={5,4,16,1,3};
for (int i=0;i<5;i++){
for(int j=0;j<=a[i];j++){
if((j*j)==a[i]){
cout << a[i]<<" la so chinh phuong"<< endl;
}
}
}
return 0;
}

