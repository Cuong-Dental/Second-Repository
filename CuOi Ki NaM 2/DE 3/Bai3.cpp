#include <iostream>

using namespace std;

class SP {
private:
	float dongia;
	int soluong;
//	float tinhthanhtien();
public:
	char *ten= NULL;
	char *ID;
//	float thanhtien;
	SP(const char*IDsp ,const char*tensp , float dongia, int soluong){
		ID= new char[10];
		ID= IDsp;
		ten= new char[10];
		ten= tensp;
		this->dongia = dongia;
		this->soluong = soluong;
	}
	~SP(){
		delete []ten;
		delete []ID;
	}
//	float tinhthanhtien(float dongia, int soluong){
//		return dongia*soluong;
//	}
	void display(){
		cout << "ID: "<< ID<< endl;
		cout << "Ten san pham: "<< ten<< endl;
//		cout << "Thanh tien: " << tinhthanhtien()<< endl;
	}
	

};

class hoadon{
private:
	char *tenkhachhang;
	char *diachi;
//	float tongtien();
public:
	SP *sanpham;
	static int sosanpham;
//	float tongtien1;
	hoadon(const char *tenkh,const char*dchi, SP *spham){
		tenkhachhang= new char [10];
		tenkhachhang= tenkh;
		diachi= new char[10];
		diachi= dchi;
//		SP* sanpham= new SP;
		*sanpham= *spham;
	}
	~hoadon(){
		delete []tenkhachhang;
		delete []diachi;
	}
	void *display (){
		cout << "Ten khach hang: " << tenkhachhang << endl;
		cout << "Dia chi: " << diachi << endl;
//		sanpham->display();
	}
};

//int hoadon::sosanpham= 0;

int main(){
	cout << "Nhap so san pham: " << endl;
	cin >> hoadon::sosanpham;
	SP *sanpham= new SP("01","Cai xanh",10000, 5);
	hoadon *hoadon1= new hoadon("Cuong", "Dak Nong", sanpham);
	hoadon1->display();
	delete sanpham;
	delete hoadon1;
	hoadon1= NULL;
	return 0;
}

