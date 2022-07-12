#include <iostream>
#include <vector>

using namespace std;

//int SumofElement(vector <int> a){
//	int Sum=0;
//	for(int i=0; i<a.size();i++){
//		if(a.at(i)%2!=0){
//			Sum+= a.at(i);	
//		}
//	}
//	return Sum;
//}

	vector<int> Resize(vector<int> v, int n){
		v.resize(n);
		for(int i=0; i<v.size(); i++){
			cout << v.at(i) << " ";
		}
//		return v;
	}

int main(){
	vector<int> a;
	int n;
	cout <<"Nhap n: ";
	cin >> n;
	for(int i=1; i<=n;i++){
		a.push_back(i);
	}
	Resize(a, 3);
//	for(int i=0;i<a.size();i++){
//		cout << a.at(i) << endl;
//	}
//	cout<<"Summary of Element= "<< SumofElement(a) <<endl;
	return 0;
}
