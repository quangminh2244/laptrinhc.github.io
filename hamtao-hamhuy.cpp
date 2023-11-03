#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Sinhvien{
    private:
        string hoten;
        string masv;        
        int tuoi;
        string diachi;
        float diemso;
    public:
        void xuatif(){
        cout<<setw(50)<<"-------infor sinh vien-------"<<endl;
        cout<<"ho va ten:"<<hoten<<endl;
        cout<<"ma sinh vien:"<<masv<<endl;
        cout<<"tuoi:"<<tuoi<<endl;
        cout<<"diem so:"<<diemso<<endl;
        cout<<"dia chi:"<<diachi<<endl;
        }
        Sinhvien(){
            hoten='\0';
            masv='\0';
            tuoi='\0';
            diachi='\0';
            diemso='\0';
        }
        Sinhvien(string hoten,string masv,int tuoi,string diachi,float diemso){
            this->hoten=hoten;
            this->masv=masv;
            this->tuoi=tuoi;
            this->diachi=diachi;
            this->diemso=diemso;
        }

};
int main(){
    string hoten="minh ok";
    string masv="r23rff";
    int tuoi=45;
    string diachi="fsdfgf2";
    float diemso=9;
    Sinhvien sv;
    sv=Sinhvien(hoten,masv,tuoi,diachi,diemso);
    sv.xuatif();

}