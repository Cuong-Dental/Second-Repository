#include <iostream>
#include <cstring>
#include <new.h>

using namespace std;

class SP {
private:
	float dongia;
	int soluong;
	float tinhthanhtien();
public:
	char* ID;
	char* ten;
	float thanhtien;
	SP(const char* IDsp, const char* tensp, float dongia, int soluong) {
		ID = new char[strlen(IDsp) + 1];
		strcpy_s(ID, IDsp);
		ten = new char[strlen(tensp) + 1];
		strcpy_s(ten, tensp);
		this->dongia = dongia;
		this->soluong = soluong;
	}
	~SP() {
		delete[]ID;
		delete[]ten;
	}
	float tinhthanhtien(float dongia, int soluong) {
		return dongia * soluong;
	}
	//	friend istream& operator>>(istream &is, SP* (&sanpham)){
	//		cout <<"Nhap ID: ";
	//		is>> sanpham->ID;
	//		cout <<"Nhap ten san pham: ";
	//		is>> sanpham->ten;
	//		cout <<"Nhap don gia: ";
	//		is>> sanpham->dongia;
	//		cout <<"Nhap so luong: ";
	//		is>> sanpham->soluong;
	//	}

	void display() {
		cout << "ID san pham: " << ID << endl;
		cout << "Ten san pham: " << ten << endl;
		cout << "Don gia: " << dongia << endl;
		cout << "So luong: " << soluong << endl;
		cout << "Thanh tien: " << tinhthanhtien();
	}
};

class hoadon {
private:
	char* tenkhachhang;
	char* diachi;
	float tinhtongtien();
public:
	SP* sanpham;
	static int sosanpham;
	float tongtien;
	hoadon(const char* tenkh, const char* dchi, SP* spham) {
		tenkhachhang = new char[strlen(tenkh) + 1];
		strcpy_s(tenkhachhang, tenkh);
		diachi = new char[strlen(dchi) + 1];
		strcpy_s(diachi, dchi);
		sanpham = spham;
	}
	~hoadon() {
		delete[]tenkhachhang;
		delete[]diachi;
	}
	//	float tinhtongtien(SP* spham){
	//		for(int i<){
	//			tongtien+= thanhtien;
	//		}
	//	}
	void display() {
		cout << "Ten: " << tenkhachhang << endl;
		cout << "Dia chi: " << diachi << endl;
		sanpham->display();
	}

};

int main() {
	SP* sanpham = new SP("01", "Bun", 1000, 5);
	hoadon* hoadon1 = new hoadon("Cuong", "Dak Nong", sanpham);
	hoadon1->display();
	delete sanpham;
	sanpham = NULL;
	delete hoadon1;
	hoadon1 = NULL;
	//	SP* sanpham= new SP[3];
	//	for(int i=0; i<3; i++){
	//		cin>> sanpham[i];
	//	}
	//	delete []sanpham;
	return 0;
}