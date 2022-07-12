#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct phanso{
	int tu, mau;
}MANG[10][20];

void nhapMANG(phanso MANG[][20]){
	srand(time(NULL));
	for(int i=0; i<10; i++){
		for(int j=0; j<20; j++){
//			MANG[i][j].tu= rand()%100-50;
//			MANG[i][j].mau= rand() % 100-50;
			cout <<"Tu ["<<i<<"]["<<j<<"]: ";
			cin >> MANG[i][j].tu;
			cout << "Mau ["<<i<<"]["<<j<<"]: ";
			cin >> MANG[i][j].mau;
		}
	}
}

void xuatMANG(phanso MANG[][20]){
	cout <<"Mang phan so la: "<< endl;
	for(int i=0; i<10; i++){
		cout << "\n\n";
		for(int j=0; j<20; j++){
			cout << MANG[i][j].tu <<"/"<< MANG[i][j].mau<<"\t" ;
		}
	}
}

void ptr(phanso MANG[][20]){
	int ptr[10][20];
	for(int i=0; i<10; i++){
		for(int j=0; j<20; j++){
			if(MANG[i][j].tu>=0){
				ptr[i][j]= -1;
			}
			else {
				ptr[i][j]= MANG[i][j].tu;
			}
		}
	}
	cout << "\n Mang ptr[][20] la: \n";
	for(int i=0; i<10; i++){
		cout << endl;
		for(int j=0; j<20; j++){
			cout << ptr[i][j]<<"\t";
		}
	}
}

void xuatChiahet3(phanso MANG[][20]){
	cout << "\nCac phan so chia het cho 3 la: "<<endl;
	for(int i=0; i<10; i++){
		for(int j=0; j<20; j++){
			if(MANG[i][j].mau%3==0){
				cout <<MANG[i][j].tu<<"/"<<MANG[i][j].mau<<"\t";
			}
		}
	}
	cout << endl;
}

void congPhanso(phanso MANG[][20]){
	phanso ps1, ps2, psmoi;
	int i1,j1,i2,j2;
	cout <<"Nhap chi so i va j phan so 1: ";
	cin >> i1>>j1;
	cout <<"Nhap chi so i va j phan so 2: ";
	cin >> i2>>j2;
	for(int i=0; i<10; i++){
		for(int j=0; j<20; j++){
			if(i==i1-1&&j==j1-1){
				ps1.tu= MANG[i][j].tu;
				ps1.mau= MANG[i][j].mau;
			}
			if(i==i2-1&&j==j2-1){
				ps2.tu= MANG[i][j].tu;
				ps2.mau= MANG[i][j].mau;
			}
		}
	}
	psmoi.tu= ps1.tu*ps2.mau + ps2.tu*ps1.mau;
	psmoi.mau= ps1.mau*ps2.mau;
	cout <<"Phan so moi la: "<< psmoi.tu<<"/"<<psmoi.mau<<endl;
}

void congPhanSo(phanso ps1, phanso ps2){
	phanso ps;
	ps.tu= ps1.tu*ps2.mau + ps2.tu*ps1.mau;
	ps.mau= ps1.mau*ps2.mau;
	cout <<ps.tu<<"/"<<ps.mau<<endl;
}

int main(){
	nhapMANG(MANG);
	xuatMANG(MANG);
	ptr(MANG);
	xuatChiahet3(MANG);
	congPhanso(MANG);
	phanso ps1, ps2;
	cout << "Nhap tu va mau cua phan so 1: ";
	cin>>ps1.tu>>ps1.mau;
	cout << "Nhap tu va mau cua phan so 2: ";
	cin>>ps2.tu>>ps2.mau;
	congPhanSo(ps1,ps2);
	return 0;
}
