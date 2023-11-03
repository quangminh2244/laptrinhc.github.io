#include<iostream>
#include<string>
using namespace std;

class sinhvien;
class giaovien{
    private:
    string ten;
    public:
    void update(sinhvien&);
}

class sinhvien{
    friend class giaovien;
    private:
    static int dem;
    string ten,id;
    public:
    void tangdem();
    int getdem();
    void nhapdulieu();
    void xuat();
};
void sinhvien::nhapdulieu(){
    fflush(stdin);
    cout<<"nhap ten:";
    getline(cin,ten);
    fflush(stdin);
    cout<<"nhap id:";
    getline(cin,id);
}
void sinhvien::xuat(){
    cout<<endl<<"sinh vien:"<<ten;
    cout<<endl<<"id:"<<id;
}
int sinhvien::dem=0;
int sinhvien::getdem(){
    return this->dem;
}
void sinhvien::tangdem(){
    dem++;
}
void nhap(int &a){
    cout<<"nhap a";
    cin>>a;
}

void update(sinhvien& x){
    x.id="45";
}
int main(){
    sinhvien x;
    int a;
    x.tangdem();
    cout<<x.getdem();
    nhap(a);
    cout<<a<<endl;
    x.nhapdulieu();
    giaovien y;
    y.update(x);
    x.xuat();



}