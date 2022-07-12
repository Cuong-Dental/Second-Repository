#include <iostream>
//#include <cstring>

using namespace std;

class HS{
private:
	char *ten;
	char *diachi;
	int tuoi;
//	float *diemtb;
public:
	HS(){
		
	}
	HS(char *t, char* d, int tuoi){
	    ten= new char[20];
	    ten= t;
//	    strcpy(this->ten, ten);
	    diachi= new char[20];
	    diachi= d;
	    this->tuoi = tuoi;
	    cout << "Ham tao duoc goi\n";
	}
	~HS(){
		cout << "Ham huy duoc goi";
		delete []ten;
		delete []diachi;
	}
//	void display(){
//		cout << "Ten: " <<ten << endl;
//		cout << "Dia chi: " << diachi << endl;
//		cout << *diemtb << endl;
//	}
	char *getTen(){
		return ten;
	}
	char *getDiachi(){
		return diachi;
	}
	int getTuoi(){
		return tuoi;
	}
	void display(){
		cout << "Ten: "<< ten <<endl;
		cout << "Dia chi: "<< diachi<< endl;
		cout << "Tuoi: " << tuoi << endl;
	}
	friend istream& operator >>(istream &is, HS *(&hs)){
//		ten= new char [20];
  		cout << "Nhap ten: " << endl;
		is.getline(hs->ten, 20);
//		diachi= new char [20];
		cout << "Nhap dia chi: "<<endl;
		is.getline(hs->diachi, 20);
		cout << "Nhap tuoi: " << endl;
		is >> hs->tuoi;
	}
//	friend ostream& operator <<(ostream &os, HS* (&hs)){
//		os <<"=========================\n";
//		os <<"Ten: " << hs->getTen() << endl;
//		os <<"Dia chi: " << hs->getDiachi() << endl;
//		os <<"Tuoi: " << hs->getTuoi() << endl;
//	}
};

int main(){
	HS *hs= new HS("Cuong", "Nam Hai", 12);
////	hs->display();
//	cout << hs->getTen()<<endl;
//	cout << hs->getDiachi()<< endl;
//	cout << hs->getTuoi() << endl;
	hs->display();
	delete hs;

//	HS *hs1= new HS;
//	cout << "Nhap thong tin hoc sinh: " << endl;
//	cin >> hs1;
////	hs1->display();
//    cout << hs1;
////  hs1->getTen();
//    delete hs1;
	return 0;
}
