#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct complex{
	double i, r;
}MANG[5][6];

void nhapMANG(complex MANG[][6]){
	srand(time(NULL));
	for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			MANG[i][j].r= rand()%100-5;
			MANG[i][j].i= rand()%100-5;
//			cout <<"Nhap phan tu r["<<i<<"]["<<j<<"]: ";
//			cin >> MANG[i][j].r;
//			cout <<"Nhap phan tu i["<<i<<"]["<<j<<"]: ";
//			cin >> MANG[i][j].i;
		}
	}
}

void xuatMANG(complex MANG[][6]){
	cout <<"Xuat MANG[5][6]: \n";
	for(int i=0; i<5; i++){
		cout << endl;
		for(int j=0; j<6; j++){
			cout << MANG[i][j].r<<"+"<<MANG[i][j].i<<"i \t";
		}
	}
	cout << endl;
}

double ptr(complex MANG[][6]){
	double ptr[5][6];
	for(int i=0; i<5;i++){
		for(int j=0; j<6; j++){
			if(MANG[i][j].r>0){
				ptr[i][j]= MANG[i][j].r;
			}
			else {
				ptr[i][j]= 0;
			}
		}
	}
}

void tinhTrungbinh(complex MANG[][6]){
	double tongao;
	for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			tongao+= MANG[i][j].i;
		}
	}
	cout <<"Gia tri trung binh cua phan ao: "<<tongao/30<<endl;
}

void congSophuc(complex sp1, complex sp2){
	complex sp;
	sp.i= sp1.i+ sp2.i;
	sp.r= sp1.r+ sp2.r;
	cout <<"Tong 2 so phuc la: \n"<<sp.r<<"+"<<sp.i<<"i \n";
}

int main(){
	nhapMANG(MANG);
	xuatMANG(MANG);
	ptr(MANG);
	tinhTrungbinh(MANG);
	complex sp1, sp2;
	cout <<"Nhap phan thuc va ao cua so dau tien: \n";
	cin >> sp1.r>>sp1.i;
	cout <<"Nhap phan thuc va ao cua so dau thu 2: \n";
	cin >>sp2.r>>sp2.i;
	congSophuc(sp1, sp2);
	return 0;
}
