#include<iostream>

using namespace std;

int main() {
    float a, b;
	int c;
	cin >> a >> c >> b;
	switch (c){
	case 1.1:
		cout << a+b;
		break;
	case 1.2:
		cout << a-b;
		break;
	case 1.3:
	    cout << a*b;
		break;
	case 1.4:
	    cout << a/b;
		break; 
	}
	return 0;
}

