#include <iostream>
using namespace std;

class nhansu {
private:
	char* ID;
	float heso; // GD:4, PGD:3, TP:2,PP:1.5, NV:1
	int luong;
	static float luongcoban;
	static int songuoi;
	static float nhapluongcoban();
	float tinhheso();
	float tinhluong();
public:
	char* hoten;
	int chucvu; //GD:1, PGD:2, TP:3, PP:4, NV:5
	nhansu(){
		hoten= new char[20];
		ID= new char[20];
		this->chucvu= 0;
		this->heso= 0;
		this->luong= 0;
		songuoi++;
	}
	~nhansu(){
		delete []hoten;
		delete []ID;
		this->chucvu= 0;
		this->heso= 0;
		this->luong= 0;
		songuoi--;
	}
	float nhapluongcoban(int chucvu){
		cout <<"Nhap luong co ban: ";
		cin >> luongcoban;
	}
	friend istream& operator>> (istream& is, nhansu &ns){
		cout <<"Nhap ho ten: ";
		is.getline(ns.hoten,20);
		cout <<"Nhap ID: ";
		is.getline(ns.ID, 20);
		cout <<"Nhap chuc vu (GD:1, PGD:2, TP:3, PP:4, NV:5): ";
		is >> ns.chucvu;
		ns.nhapluongcoban(ns.chucvu);
		ns.tinhheso(ns.chucvu); //tinh he so theo chuc vu
		ns.tinhluong(ns.heso);// tinhluong
		cin.ignore();
	}
	friend ostream& operator<<(ostream& os, nhansu& ns){
		cout <<"=============\n";
		cout << "STT: " << ns.songuoi <<endl;
		cout <<"Ho va ten: " << ns.hoten << endl;
		cout <<"ID: " <<ns.ID << endl;
		cout <<"Chuc vu: ";
		if(ns.chucvu==1){
			cout <<"Giam doc\n";
		}
		if(ns.chucvu==2){
			cout <<"Pho giam doc\n";
		}
		if(ns.chucvu==3){
			cout <<"Truong phong\n";
		}
		if(ns.chucvu==4){
			cout <<"Pho phong\n";
		}
		if(ns.chucvu==5){
			cout <<"Nhan vien\n";
		}
		cout <<"Luong: "<< ns.tinhluong(ns.heso)<<endl;
}
	
	float tinhheso(int chucvu){
		if(chucvu==1){
			heso= 4;
		}
		if(chucvu==2){
			heso= 3;
		}
		if(chucvu==3){
			heso= 3;
		}
		if(chucvu==4){
			heso= 1.5;
		}
		if(chucvu==5){
			heso= 1;
		}
	return heso;
	}
	float tinhluong(float heso){
		return nhansu::luongcoban* heso;
	}
//	void setSonguoi(){
//		cin >> songuoi;\
//		cin.ignore();
//	}
//	int getSonguoi(){
//		return songuoi;
//	}
};

int nhansu::songuoi= 0;
float nhansu::luongcoban= 0;
//float nhapluongcoban(nhansu ns){
//	cout <<"Nhap luong co ban: ";
//	ns.setLuongcoban();
//}

int main(){
	int sonhanvien;
	cout <<"Nhap so nhan vien: ";
	cin >> sonhanvien;
	cin.ignore();
	nhansu Nhansu[sonhanvien];
//	nhansu Nhansu;
	for(int i=0; i<sonhanvien; i++){
	cin >> Nhansu[i];	
	}
	for(int i=0; i<sonhanvien; i++){
	cout << Nhansu[i];
	}
	return 0;
}
