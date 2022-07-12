#include <iostream>
using namespace std;

	struct nhapdiem {
		char hovaten[20];
		int sbd;
		float dtb;
	}; 
	
int main (){
	int sosinhvien;
	cout << "nhap so luong sinh vien: "; 
	cin >> sosinhvien;
	nhapdiem bachkhoa[sosinhvien];
	cout << "input information of candidates: " << endl;
	for (int i=0; i<sosinhvien ;i++){
		cout << "candidate No." << i+1 << " " << endl;
		cout << "Ho va ten: ";
		cin >> bachkhoa[i].hovaten;
		cout << "SBD: ";
		cin >> bachkhoa[i].sbd;
		cout << "DTB: ";
		cin >> bachkhoa[i].dtb;
	}
	int a;
	cout << "infor of candidate No. ";
	cin >> a;
	cout << "Ho va ten: " << bachkhoa[a-1].hovaten << endl;
	cout << "So bao danh: " << bachkhoa[a-1].sbd << endl;
	cout << "Diem trung binh: " << bachkhoa[a-1].dtb; 
	return 0;
}
