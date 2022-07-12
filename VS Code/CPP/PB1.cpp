#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cin>>n;
    } while(n <= 1 || n >= 200);

    for(int i = 1; i <= n; i++){
        if((float)n/i == (int)n/i){
            int j = n / i;
            cout << i << " " << j << endl;
            break;
        }
    }

    return 0;
}