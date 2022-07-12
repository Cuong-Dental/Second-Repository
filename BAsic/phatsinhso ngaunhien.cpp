#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(NULL));
	int nSecret, nGuess;
	nSecret= rand() %10 + 1;
	do{

		cout << "Let guess the secret number: ";
		cin >> nGuess;
		if(nGuess>nSecret){
			cout << "The number is too higher!!!\n";
		} else if(nGuess<nSecret){
			cout << "The number is too lower!!!\n";
		}
	}while(nSecret!= nGuess);
	cout <<"CONGRATULATION!!!\n YOU WIN";
	return 0;
}

