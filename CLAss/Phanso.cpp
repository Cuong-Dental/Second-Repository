#include <iostream>

using namespace std;

class Phso{
	private:
		int tu,mau;
	public:
		Phso(int tu, int mau){
			this->tu= tu;
			this->mau= mau;
		}
		~Phso (){
			cout <<"Ham huy da duoc tao"<< endl;
		}
//Tu cua phan so moi sau khi cong hai phan so    
    int Congtu(Phso ps){
    	return tu*ps.mau + mau*ps.tu;
	}
//Tu cua phan so moi sau khi tru hai phan so
	int Trutu(Phso ps){
		return tu*ps.mau - mau*ps.tu;
	}
//Mau cua phan so moi sau khi cong hay tru la nhu nhau
	int Mau(Phso ps){
		return mau*ps.mau;
	}
	
	void xuat(Phso ps){
		cout << "Gia tri a/b+c/d= ";
	    cout << Congtu(ps) <<"/"<<  Mau(ps) << endl;
		cout << "Gia tri a/b-c/d= ";
		cout << Trutu(ps) <<"/"<<  Mau(ps) << endl;
	}
};

int main(){
	int a,b,c,d;
	cout << "Nhap lan luot tu va mau cua hai phan so: "<<endl;
	cout <<"a= ";cin >>a;
	cout <<"b= ";cin >>b;
	cout <<"c= ";cin >>c;
	cout <<"d= ";cin >>d;
	Phso ps1(a,b), ps2(c,d);
	ps1.xuat(ps2);
	return 0;
}
