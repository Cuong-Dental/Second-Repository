#include <iostream>

using namespace std;
class Math{
	public:
	static int max(int x, int y){
		return x>y?x:y;
	}
};
int main(){
//	Math math;
//	cout << Math::max(1,2);
    int arr[]= {1,2,3};
    cout << sizeof(arr) <<"bytes";
	return 0;
}
