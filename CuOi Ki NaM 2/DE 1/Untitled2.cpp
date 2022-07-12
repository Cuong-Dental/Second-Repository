#include <iostream>

using namespace std;

class nguoi{
public:
	char* ho;
	char* ten;
protected:
	char* ngaysinh;
public:
	nguoi(){
		ho= new char[20];
		ten= new char[20];
		ngaysinh= new char[15];
	}
	~nguoi(){
		delete []ho;
		delete []ten;
		delete []ngaysinh;
	}
};

class sinhvien: public nguoi{
private:
	float dtb;
	int hoatdong;
public:
	static int siso;
	float diemtongket;
	sinhvien(){
		this->dtb= 0;
		this->hoatdong= 0;
		this->diemtongket= 0;
	}
	~sinhvien(){
		this->dtb= 0;
		this->hoatdong= 0;
		this->diemtongket= 0;
	}
	friend istream& operator>> (istream& is, sinhvien& sv){
		cout <<"Nhap Ho: ";
		is.getline(sv.ho, 20);
		cout <<"Nhap Ten: ";
		is.getline(sv.ten, 20);
		cout <<"Nhap Ngay sinh: ";
		is.getline(sv.ngaysinh, 20);
		cout <<"Nhap diem trung binh: ";
		is >> sv.dtb;
		cout <<"Nhap hoat dong (1-Lop truong, 2-Bi thu, 3-NCKH, 4-Olympic): ";
		is >>sv.hoatdong;
		cin.ignore();
	}
	friend ostream& operator<<(ostream& os, sinhvien& sv){
		cout <<"Ho va ten: "<<sv.ho<<" "<<sv.ten<< endl;
		cout <<"Ngay sinh: "<<sv.ngaysinh<<endl;
		cout <<"Diem trung binh: "<<sv.dtb<<endl;
		cout <<"Hoat dong: ";
		if(sv.hoatdong==1){
			cout <<"Lop truong\n";
		} 
		if(sv.hoatdong==2){
			cout <<"Bi thu\n";
		}
		if(sv.hoatdong==3){
			cout <<"NCKH\n";
		}
		if(sv.hoatdong==4){
			cout <<"Olympic\n";
		}
		cout <<"Diem tong ket: "<<sv.tinhdiemtongket()<< endl;
	}
	float tinhdiemtongket(){
		if(hoatdong==1){
			diemtongket= dtb+ 0.5;
		}
		if(hoatdong==2){
			diemtongket= dtb+ 0.4;
		}
		if(hoatdong==3){
			diemtongket= dtb+ 0.6;
		}
		if(hoatdong==4){
			diemtongket= dtb+ 0.8;
		}
		return diemtongket;
	}
};
int sinhvien:: siso= 0;

int main(){
	cin >> sinhvien::siso; 
	sinhvien sv[sinhvien::siso];
	cin.ignore();
	cout <<"Nhap thong tin sinh vien: \n";
	for(int i=0; i<sinhvien::siso;i++){
	cin >> sv[i];
	}
	cout <<"Xuat thong tin sinh vien: \n";
	for(int i=0; i<sinhvien::siso; i++){
		cout << sv[i];
	}
	return 0;
}

