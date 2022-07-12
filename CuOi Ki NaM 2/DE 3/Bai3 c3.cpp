#include <iostream>
#include <cstring>

using namespace std;

class SP{
private:
	float dongia;
	int soluong;
	float tinhthanhtien();
public:
	char* ID;
	char* ten;
	float thanhtien;
	SP(){
		ID= new char[10];
		ten= new char[10];
		this->dongia= 0;
		this->soluong= 0;
	}
	~SP(){
		delete []ID;
		delete []ten;
		this->dongia= 0;
		this->soluong= 0;
	}
	float tinhthanhtien(int dongia, float soluong){
		thanhtien= dongia* soluong;
		return thanhtien;
	}
    
	friend istream& operator>>(istream &is, SP &sanpham){
		cout <<"Nhap ID: ";
		is.getline(sanpham.ID, 20);
		cout <<"Nhap ten san pham: ";
		is.getline(sanpham.ten, 20);
		cout <<"Nhap don gia: ";
		is>> sanpham.dongia;
		cout <<"Nhap so luong: ";
		is>> sanpham.soluong;
		cin.ignore();
	}
	
	friend ostream& operator<<(ostream &os, SP &sanpham){
		os << "ID san pham: "<< sanpham.ID<<endl;
		os << "Ten san pham: "<< sanpham.ten<< endl;
		os << "Don gia:"<< sanpham.dongia<< endl;
		os << "So luong: "<< sanpham.soluong<< endl;
		os << "Thanh tien: "<<sanpham.tinhthanhtien(sanpham.dongia, sanpham.soluong)<< endl;
	}
};


class hoadon{
private:
	char* tenkhachhang;
	char* diachi;
	float tinhtongtien();
public:
	SP* sanpham;
	static int sosanpham;
	float tongtien;
	hoadon(){
		tenkhachhang= new char[20];
		diachi= new char[10];
		this->tongtien= 0;
		sanpham= new SP[sosanpham];
	}
	~hoadon(){
		delete []tenkhachhang;
		delete []diachi;
		this->tongtien= 0;
		delete []sanpham;
	}
	float tinhtongtien(SP* sanpham){
		for(int i=0; i<sosanpham; i++){
			tongtien+= sanpham[i].thanhtien;
		}
		return tongtien;
	}
	
	friend istream& operator>>(istream &is, hoadon &hoadon1){
		cout <<"Nhap ten khach hang: ";
		is.getline(hoadon1.tenkhachhang, 20);
		cout << "Nhap dia chi: ";
		is.getline(hoadon1.diachi, 20);
        cout <<"Nhap san pham: "<< endl;
		for(int i=0; i<sosanpham;i++){
		is>>hoadon1.sanpham[i];
		cin.ignore();
		}
	}
	
	friend ostream& operator<<(ostream&os, hoadon &hoadon1){
		os << "Ten: "<<hoadon1.tenkhachhang<< endl;
		os << "Dia chi: "<< hoadon1.diachi<< endl;
		cout << endl;
		for(int i=0; i<sosanpham; i++){
		os << hoadon1.sanpham[i];
		}
		os << "Tong tien: "<<hoadon1.tinhtongtien(hoadon1.sanpham)<< endl;
	}
};

int hoadon::sosanpham= 0;

int main(){
    cout <<"Nhap so san pham: ";
    cin >> hoadon::sosanpham;
    cin.ignore();
	hoadon hoadon1;
	cout << "Nhap thong tin hoa don: \n";
	cin >> hoadon1;
	cout << hoadon1;
	return 0;
	
}
