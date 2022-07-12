#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
	ifstream input("outfile.txt",ios::in);
	string text;
    input>> text;
    cout<<text;
    input.close();
//    int num;
//    input>>num;
//	cout << num;
	return 0;
}
