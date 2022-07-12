#include <iostream>

using namespace std;

struct sanpham{
	char tensanpham[25];
	float dongia;
	int soluong;
}hoadon[50];

void nhapSanpham(sanpham hoadon[50], int &dem){
	char k;
	for(int i=0; i<50; i++){
		dem++;
		cout <<"Nhap thong tin hoa don ["<<i+1<<"]: \n";
		cout <<"Ten san pham: ";
		cin.getline(hoadon[i].tensanpham, 25);
		cout <<"Don gia: ";
		cin >> hoadon[i].dongia;
		cout <<"So luong: ";
		cin >> hoadon[i].soluong;
		cout << "Muon dung nhap khong???";
		cin >> k;
		cin.ignore();
		if(k== 'k'){
			break;
		}
	}
}

void xuatSanpham(sanpham hoadon[50], int &dem){
	for(int i=0; i<dem; i++){
		cout <<"Hoa don ["<<i+1<<"]: \n";
		cout << "Ten san pham: "<<hoadon[i].tensanpham<<endl;
		cout << "Don gia: "<<hoadon[i].dongia<<endl;
		cout << "So luong: "<<hoadon[i].soluong<<endl;
		cout << endl;
	}
}

void tongsotien(sanpham hoadon[50], int &dem){
	float tongsotien;
	for(int i=0; i<dem; i++){
		tongsotien+= (hoadon[i].dongia* hoadon[i].soluong);
	}
	cout << "Tong so tien cua cac don hang la: "<< tongsotien<< endl;
}

void demSoluonghon3(sanpham hoadon[50], int &dem){
	int dem3;
	for(int i=0; i<dem; i++){
		if(hoadon[i].soluong>3){
			dem3++;
			cout << hoadon[i].tensanpham<< endl;
			cout << hoadon[i].dongia<<endl;
			cout << hoadon[i].soluong<<endl;
		}
	}
	cout <<"So hoa don co so luong >3 la: "<<dem3<<endl;
}

int main(){
	int dem;
	dem=0;
	nhapSanpham(hoadon, dem);
	xuatSanpham(hoadon, dem);
	tongsotien(hoadon, dem);
	demSoluonghon3(hoadon,dem);
	return 0;
}
