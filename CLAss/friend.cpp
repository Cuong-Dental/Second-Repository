#include <iostream>

using namespace std;

class SP {
private:
	int i;
	int r;
public:
	SP(){
		
	}
	SP(int i, int r){
		this->i = i;
		this->r = r;
	}
	friend SP cong(SP s1, SP s2){
		SP temp;
		temp.i = s1.i + s2.i;
		temp.r = s2.r + s2.r;
		cout << temp.i << endl;
		cout << temp.r << endl;
	}
};

int main (){
	SP s(0,0), s1(1,2), s2(2,3);
    cong(s1, s2);
	return 0; 
}
