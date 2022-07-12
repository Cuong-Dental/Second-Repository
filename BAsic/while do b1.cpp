#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n)  // dung bubble sort, thay ham cach xu ly ham swap bang bien t
{
    int i, j;
    int temp;
    for (i = 0; i < n-1; i++){   
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i<n; i++){
        if (arr[i] %2 == 0){
            cout << arr[i] << " ";
        }
    }
    for(int i = 0; i<n; i++){
        if (arr[i] %2 ==1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[100];
    int n;
    cout << "Nhap n";
    cin >> n;
    cout << "Nhap mang a";
    for(int i= 0;i<n;i++){
        cin >> arr[i];
    }
    sorting(arr,n);
    cout << "Nguyen Duc Cuong" << endl;
    return 0;
}
