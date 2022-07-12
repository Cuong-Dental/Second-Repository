#include<iostream>
using namespace std;
class nguoi
{
    public:
        char *ho;
        char *ten;
    protected:
        char *ngaysinh;
    public:
        nguoi()
        {
//            char x[] = "";
//            this->ho = x;
//            this->ten = x;
//            this->ngaysinh = x;
        }
        nguoi(char* x, char* y, char* z )
        {
            this->ho = x;
            this->ten = y;
            this->ngaysinh = z;
        }
        ~nguoi(){
            delete this->ho;
            delete this->ten;
            delete this->ngaysinh;
        };

};
class giangvien: nguoi
{
    private:
        float sotiet;
        int chucvu; 
    public:
        //static int soluong;
        float tongsotiet;
    public:
        giangvien(){
            this-> sotiet = 0;
            this->chucvu = 0;
          //  this->soluong = 0;
            this->tongsotiet = 0;
        };
        ~giangvien(){
            this->chucvu = 0;
            this->sotiet = 0;
            //this->soluong = 0;
            this->tongsotiet = 0;
        };
        void tinhtongsotiet()
        {
            if(this->chucvu == 4) 
                {
                    this->tongsotiet = 1.8*this->sotiet;
                }
            else if (this->chucvu == 3 )
            {
                this->tongsotiet= 1.6*this->sotiet;

            }
            else if (this->chucvu == 2)
            {
                this->tongsotiet = 1.4*this->sotiet;
            }
            else if(this->chucvu == 1 )
            {
                this->tongsotiet = 1*this->sotiet;
            }
        }
        friend istream &operator >> (istream &i, giangvien &gv)
        {   
            
            char* h = new char[50];
            char* t = new char[50];
            char* ns = new char[50];

            cout << "ho"; 
            i >> h;
            gv.ho = h;
//            cout << gv.ho ;
            cout <<"ten";   
            i >> t;
            gv.ten = t;
            cout << "ngay sinh";
            i >> ns;
            gv.ngaysinh = ns;
            cout << "So tiet ";
            i >> gv.sotiet;
            cout << "chuc vu( truong khoa 4, pho khoa 3, truong bo mon 2, gv 1)";
            i >> gv.chucvu;
            return i ;

        }
        friend ostream &operator << (ostream &o, giangvien &gv)
        {   
            o << " \n ho la " << gv.ho << "\n ten la " << gv.ten <<"\n ns" << gv.ngaysinh << " \n so tiet " << gv.sotiet << "\nchuc vu " << gv.chucvu << "\n tong so tiet " << gv.tongsotiet;
            
            return o;
        }
        
};
int main()
{
    giangvien gv;
    cin >> gv;
    gv.tinhtongsotiet();
    cout << gv;
    return 0;
}
