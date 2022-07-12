#include <iostream>
#include <cstring>

using namespace std;

class nguoi{
protected:
	char* ngaysinh;
public:
	char* ho;
	char* ten;
	nguoi(){
		ngaysinh= new char[20];
		ten= new char[20];
		ho= new char[20];
	}
	nguoi(char* Ho, char* Ten, char* Ngaysinh){
		
		this->ho= Ho;
		this->ten= Ten;
//		ten= new char[strlen(Ten)+ 1];
//		strcpy(ten, Ten);
		this->ngaysinh= Ngaysinh;
//		ngaysinh= new char[strlen(Ngaysinh)+ 1];
//		strcpy(ngaysinh, Ngaysinh);
	}
	~nguoi(){
		delete []ho;
		delete []ten;
		delete []ngaysinh;
	}
	void display(){
		cout <<"Ho ten: "<<ho<<" "<<ten<<endl;
		cout <<"Sinh: "<< ngaysinh<<endl;
	}
};

class giangvien: public nguoi{
private: 
	float sotiet;
	int chucvu;
public:
	int static soluong;
	float tongsotiet;
	giangvien(){
		this->sotiet= 0;
		this->chucvu= 0;
		this->tongsotiet= 0;
	}
//	giangvien(char*ho, char*ten, char*ngaysinh, float sotiet, int chucvu): nguoi(ho, ten, ngaysinh){
//		this->sotiet= sotiet;
//		this->chucvu= chucvu;
//	}
	~giangvien(){
		this->sotiet= 0;
		this->chucvu= 0;
		this->sotiet= 0;
	}
	
	float tinhtongsotiet(){
		if(chucvu==4){
			tongsotiet= sotiet* 2;
		}
		if(chucvu==3){
			tongsotiet= sotiet* 1.6;
		}
		if(chucvu==2){
			tongsotiet= sotiet* 1.4;
		}
		if(chucvu==1){
			tongsotiet= sotiet* 1;
		}
		return tongsotiet;
	}
	
	friend istream& operator>>(istream& is, giangvien& gv);
	friend ostream& operator<<(ostream &os, giangvien& gv);
	
//	friend istream& operator>>(istream& is, giangvien (&gv)){
//		cout <<"Nhap Ho: ";
//		is.getline(gv.ho, 20);
//		cout <<"Nhap Ten: ";
//		is.getline(gv.ten, 20);
//		cout <<"Nhap Ngay sinh: ";
//		is >> gv.ngaysinh;
//	    cout <<"Nhap So tiet: ";
//		is >> gv.sotiet;
//		cout <<"Nhap Chuc vu (4-Truong khoa, 3-Pho khoa, 2-Truong bo mon, 1-GV): ";
//		is >> gv.chucvu;
//		is.ignore();
//	}
	
//	friend ostream& operator<<(ostream& os, giangvien (&gv)){
//		cout <<"Ho va ten giang vien: " <<gv.ho<<" "<<gv.ten<<endl;
//		cout <<"Ngay sinh: "<<gv.ngaysinh<<endl;
//		if(gv.chucvu==4){
//			cout <<"Chuc vu: Truong khoa \n";
//		}
//		if(gv.chucvu==3){
//			cout <<"Chuc vu: Pho khoa \n";
//		}
//		if(gv.chucvu==2){
//			cout <<"Chuc vu: Truong bo mon \n";
//		}
//		if(gv.chucvu==1){
//			cout << "Chuc vu: GV\n";
//		}
//		cout <<"So tiet: "<< gv.sotiet<< endl;
//		cout <<"Tong so tiet: "<< gv.tinhtongsotiet()<< endl;
//		cout <<"================================="<<endl;
//	}
};

istream& operator>>(istream& is, giangvien (&gv)){
		cout <<"Nhap Ho: ";
		is.getline(gv.ho, 20);
		cout <<"Nhap Ten: ";
		is.getline(gv.ten, 20);
		cout <<"Nhap Ngay sinh: ";
		is >> gv.ngaysinh;
	    cout <<"Nhap So tiet: ";
		is >> gv.sotiet;
		cout <<"Nhap Chuc vu (4-Truong khoa, 3-Pho khoa, 2-Truong bo mon, 1-GV): ";
		is >> gv.chucvu;
		is.ignore();
	}
	
		ostream& operator<<(ostream& os, giangvien &gv){
		cout <<"Ho va ten giang vien: " <<gv.ho<<" "<<gv.ten<<endl;
		cout <<"Ngay sinh: "<<gv.ngaysinh<<endl;
		if(gv.chucvu==4){
			cout <<"Chuc vu: Truong khoa \n";
		}
		if(gv.chucvu==3){
			cout <<"Chuc vu: Pho khoa \n";
		}
		if(gv.chucvu==2){
			cout <<"Chuc vu: Truong bo mon \n";
		}
		if(gv.chucvu==1){
			cout << "Chuc vu: GV\n";
		}
		cout <<"So tiet: "<< gv.sotiet<< endl;
		cout <<"Tong so tiet: "<< gv.tinhtongsotiet()<< endl;
		cout <<"================================="<<endl;
	}
	
int giangvien::soluong=0;

int main (){
//	cout <<"Nhap so luong giang vien: ";
//	cin >> giangvien::soluong;
//	cin.ignore();
//	
//	giangvien gv3[giangvien::soluong];
//	for(int i=0; i<giangvien::soluong; i++){
//		cin >> gv3[i];
//	}
//	for(int i=0; i<giangvien::soluong; i++){
//		cout << gv3[i];
//	}
	
	
	nguoi hs1("Nguyen Duc", "Cuong", "1212");
	hs1.display();
	return 0;
}
