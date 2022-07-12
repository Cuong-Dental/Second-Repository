#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
//	ifstream infile("infile.txt");
	ofstream outfile;
	outfile.open("outfile.txt",ios::app);
	string str;
	getline(cin,str);
	int num;
	cin>>num;
	outfile<< str<<num;
//	int a,b,c,d,e;
//	infile >>a>>b>>c>>d>>e;
//	outfile <<"sum of 3 number is: ";
//	outfile <<(b+e)/2;
	
//	infile.close();
	outfile.close();
	
	return 0;
}
