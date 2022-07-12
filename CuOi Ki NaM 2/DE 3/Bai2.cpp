#include <iostream>
#include <cstdlib>
#include <ctime>
//#DEFIND ROW 4
//#DEFIND COL 4

using namespace std;

struct CAUTRUC{
	int songuyen;
	float sothuc;
}MANG[10][20];

void nhapMANG(CAUTRUC MANG[][20]){
	srand(time(NULL));
	for(int i=0; i<10; i++){
		for(int j=0; j<20; j++){
//			cout <<"Nhap phan tu so nguyen MANG["<<i<<"]["<<j<<"]: ";
			MANG[i][j].songuyen= rand() % 100;
			MANG[i][j].sothuc= (float)(rand() % 100)/7;
		}
	}
//	for(int i=0; i<10; i++){
//		for(int j=0; j<20; j++){
////			cout <<"Nhap phan tu so thuc MANG["<<i<<"]["<<j<<"]: ";
//			MANG[i][j].sothuc= (float)(rand() % 100)/7;
//		}
//	}
}

void xuatMANG(CAUTRUC MANG[][20]){
	cout <<"Xuat cac phan tu so nguyen trong MANG:";
	for(int i=0; i<10; i++){
	cout << endl;
	cout << endl;
		for(int j=0; j<20; j++){
			cout << MANG[i][j].songuyen <<"\t";
		}
	}
    
    cout << endl;
	cout <<"Xuat cac phan tu so thuc trong MANG:";
	for(int i=0; i<10; i++){
	cout << endl;
	cout << endl;
		for(int j=0; j<20; j++){
			cout << MANG[i][j].sothuc <<"\t";
		}
	}	
}

void tinhMANG(CAUTRUC MANG[][20]){
	int ptr[10][20];
	for(int i=0; i<10; i++){
		for(int j=0; j<20; j++){
			if(MANG[i][j].sothuc>0){
				ptr[i][j]= MANG[i][j].sothuc;
			}
			else {
				ptr[i][j]= -1;
			}
		}
	}
	cout <<"\nHien thi mang ptr: \n";
	for(int i=0; i<10; i++){
	cout << endl;
		for(int j=0; j<20; j++){
			cout << ptr[i][j] << "\t";
		}
	}
}

void tinhtongMANG(CAUTRUC MANG[][20], int cotJ){
	int S=0;
	for(int i=0; i<10; i++){
		for(int j=0; j<20; j++){
			if(j==cotJ-1){
				S+= MANG[i][j].songuyen;
			}
		}
	}
	cout <<"\nTong cac phan thu cot "<<cotJ<<" trong mang: " << S<< endl;
}

int main(){
//	CAUTRUC MANG[2][3];
	
	nhapMANG(MANG);
	xuatMANG(MANG);
	int cotJ;
	cout << "\nNhap cot  muon tinh tong: ";
	cin >> cotJ;
	tinhtongMANG(MANG, cotJ);
	tinhMANG(MANG);
	return 0;
}
