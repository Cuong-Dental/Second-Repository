#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Sinhvien{
	int maSV;
	string hoten;
	short tuoi;
//	short DiemRL;
	string gioitinh;
//	string soDT;
//	string diachi;
//	string lop;
//	int soHP;
//	string tenHP;
	float diemCK,diemGK,diemCKi;
	float DTB=0;
//	string hocluc;
};

typedef Sinhvien SV;

void TinhDTB(SV &sv){
	 sv.DTB = sv.diemCK*0.2 + sv.diemGK*0.2 + sv.diemCKi*0.6;
}

void NhapSV(SV &sv){
    cout <<"Ma sinh vien: "; cin>>sv.maSV;
    cout <<"Ho va ten: "; 
	fflush(stdin);
	getline(cin,sv.hoten);
    cout <<"Tuoi: ";      cin>> sv.tuoi; 
    cout <<"Gioi tinh: "; cin>> sv.gioitinh; 
    cout <<"Diem CCan, diemGK, diemCK: ";
	cin >>sv.diemCK>>sv.diemGK>>sv.diemCKi;
    TinhDTB(sv);
}

void NhapThongtinSV(SV a[], int n){
	cout<<"____________________________________"<<endl;
	Sinhvien sv;
    ofstream outFile;
    outFile.open("Sinhvien.txt",ios::binary|ios::app);
    for(int i=0; i<n; i++){
        cout<<"Nhap SV thu "<<i+1<<":"<<endl;
        NhapSV(a[i]);
    }
    cout<<"____________________________________"<<endl;
}

void XuatSV(SV &sv){
	cout <<"  Ma sinh vien: "<<sv.maSV<<endl;
	cout <<"  Ho ten SV: "<<sv.hoten<<endl;
    cout <<"  Gioi tinh: "<<sv.gioitinh<<endl;
    cout <<"  Tuoi SV : " <<sv.tuoi<<endl;
    cout <<"  Diem CK,GK,CKi: "<<sv.diemCK<<" "<<sv.diemGK<<" "<<sv.diemCKi;
	cout <<endl;
    cout <<"  Diem TB: "<< sv.DTB;
    cout <<endl;
}

void XuatThongtinSV(SV a[], int n){
	cout <<"____________________________________"<<endl;
    for(int i=0; i<n; i++){
        cout <<"Thong tin SV thu "<<i+1<<":"<<endl;
        XuatSV(a[i]);
    }
    cout <<"____________________________________"<<endl;
}

void TimSV(SV &sv){
	cout <<"  Ma sinh vien: "<<sv.maSV<<endl;
	cout <<"  Ho ten SV: "<<sv.hoten<<endl;
    cout <<"  Gioi tinh: "<<sv.gioitinh<<endl;
    cout <<"  Tuoi SV : " <<sv.tuoi<<endl;
    cout <<"  Diem CK,GK,CKi: "<<sv.diemCK<<" "<<sv.diemGK<<" "<<sv.diemCKi;
	cout <<endl;
    cout <<"  Diem TB: "<< sv.DTB<<endl;
}

void TimkiemSV(SV a[], int n){
	int ma;
	int dem=0;
	cout <<"Yeu cau nhap ma sinh vien: "; cin>>ma;
	for (int i=0; i<n; i++){
	if(ma==a[i].maSV){
		TimSV(a[i]);
		dem++;
		break;
	}
}
    if(dem!=1){
    cout <<"Ma sinh vien can tim khong co!!!"<<endl;
    TimkiemSV(a,n);
}
}

void SapxepSV(SV a[], int n){
	//Sap xep theo DTB tang dan
    SV TGian;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].DTB > a[j].DTB){
                TGian = a[i];
                a[i] = a[j];
                a[j] = TGian;
            }
        }
    }
}

void Xeploai(SV &sv){
	if(sv.DTB >= 8)        cout<<"Gioi"<<endl;
    else if(sv.DTB >= 6.5) cout<<"Kha"<<endl;
    else if(sv.DTB >= 4)   cout<<"Trung binh"<<endl;
    else                   cout<<"Yeu"<<endl;
}

void XeploaiSV(SV a[], int n){
	cout <<"____________________________________"<<endl;
    for(int i=0; i<n; i++){
        cout <<"Xep loai cua SV "<<a[i].hoten<<": ";
        Xeploai(a[i]);
    }
    cout <<"____________________________________"<<endl;
}

void GhiFile(SV a[], int n, string fileName){
	ofstream fileOutput("fileName.txt");

	if (fileOutput.fail()){
		cout <<"Khong the mo file "<<fileName<<endl;
		return;
	}
	
	for (int i=0; i<n; i++){
		fileOutput<<setw(4)<<"MSV"<<setw(4)<<"Hoten"<<setw(10)<<"Tuoi"<<setw(4)<<"Gioitinh";
		fileOutput<<setw(4)<<"Diem CCan"<<setw(4)<<"Diem GK"<<setw(4)<<"Diem CK"<<setw(4)<<"Diem TB"<<endl;
		fileOutput<<setw(4)<<a[i].maSV<<setw(4)<<a[i].hoten<<setw(10)<<a[i].tuoi<<setw(4)<<a[i].gioitinh;
		fileOutput<<setw(4)<<a[i].diemCK<<setw(4)<<a[i].diemGK<<setw(4)<<a[i].diemCKi<<setw(4)<<a[i].DTB<<endl;     
		                                                                                                       
	fileOutput.close();
}
}

//void DocFile(){
//}

int main (){
	int key;
    string fileName = "DSSV.txt";
    int n;
    bool daNhap = false;
    do{
        cout <<"=> Nhap so luong SV: "; cin >>n;
    }while(n <= 0);
    SV a[n];  
    while(n>=0){
    	system("cls");
//        system("pause");
        cout<<"******************************************"<<endl;
        cout<<"**    CHUONG TRINH QUAN LY SINH VIEN    **"<<endl;
        cout<<"**      1. Nhap thong tin sinh vien     **"<<endl;
        cout<<"**      2. Hien thi danh sach sinh vien **"<<endl;
        cout<<"**      3. Tim kiem sinh vien bang ma   **"<<endl;
        cout<<"**      4. Sap xep sinh vien theo DTB   **"<<endl;
        cout<<"**      5. Xep loai sinh vien           **"<<endl;
        cout<<"**      6. Xuat DS sinh vien            **"<<endl;
        cout<<"**      0. Thoat                        **"<<endl;
        cout<<"******************************************"<<endl;
        cout<<"**       Nhap lua chon cua ban:         **"<<endl;
        cout<<"                  "; cin >> key;
        switch(key){
            case 1:
                cout<<"  Ban da chon nhap DS sinh vien!"<<endl;
                NhapThongtinSV(a,n);
                cout<<"  Ban da nhap thanh cong!"<<endl;
                daNhap = true;
                cout<<"  Bam phim bat ky de tiep tuc!"<< endl;
                getchar();
                break;
            case 2:
                if(daNhap){
                    cout <<"  Ban da chon xuat DS sinh vien!"<<endl;
                    XuatThongtinSV(a,n);
                }else{
                    cout <<"  Nhap DS SV truoc!!!"<<endl;
                }
                cout <<"  Bam phim bat ky de tiep tuc!"<<endl;
                system("pause");
                getchar();
                break;
            case 3:
            	if(daNhap){
            		cout <<"  Ban da chon tim kiem sinh vien bang ma!"<<endl;
            		TimkiemSV(a,n);
            	}else{
            		cout <<"  Nhap DS SV truoc!!!"<<endl;
				}
				cout <<"  Bam phim bat ky de tiep tuc!"<<endl;
				system("pause");
				getchar();
				break;
            case 4:
                if(daNhap){
                    cout <<"  Ban da chon sap xep SV theo STB!"<<endl;
                    SapxepSV(a,n);
                    XuatThongtinSV(a,n);
                }else{
                    cout <<"  Nhap DS SV truoc!!!"<<endl;
                }
                cout <<"  Bam phim bat ky de tiep tuc!"<<endl;
                system("pause");
                getchar();
                break;
            case 5:
                if(daNhap){
                    cout <<"  Ban da chon thoat xep loai SV!"<<endl;
                    XeploaiSV(a,n);
                }else{
                    cout <<"  Nhap DS SV truoc!!!!"<<endl;
                }
                cout <<"  Bam phim bat ky de tiep tuc!"<<endl;
                system("pause");
                getchar();
                break;
            case 6:
                if(daNhap){
                    cout <<"  Ban da chon xuat file DS SV!"<<endl;
                    GhiFile(a,n,fileName);
                    cout <<"  Xuat DSSV thanh cong vao file "<<fileName<<"!"<<endl;
                }else{
                    cout <<"  Nhap DS SV truoc!!!"<<endl;
                }
                cout <<"  Bam phim bat ky de tiep tuc!"<<endl;
                system("pause");
                getchar();
                break;
            case 0:
                cout <<"  Ban da chon thoat chuong trinh";
                getchar();
                return 0;
            default:
                cout <<"  Khong co chuc nang nay"<<endl;
                cout <<"  Bam phim bat ky de tiep tuc"<<endl;
                getchar();
                break;
        }
    }
    return 0;
}

