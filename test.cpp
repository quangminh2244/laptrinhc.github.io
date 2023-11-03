#include<bits/stdc++.h>
using namespace std;
class thisinh{
    private:
        string msv,hoten;
        float dt,dl,dh;
    public:
        void nhap();
        void xuat();
        float tongdiem();
        friend bool sx(thisinh a,thisinh b);
        
};

bool sx(thisinh a,thisinh b){
    return  a.hoten> b.hoten;
}
void thisinh::nhap(){
    fflush(stdin);
    cout<<"nhap ho ten: ";
    getline(cin,hoten);
    fflush(stdin);
    cout<<"nhap ma thi sinh: ";
    getline(cin,msv);
    cout<<setw(30)<<"nhap diem:"<<endl;
    cout<<"diem toan:";
    cin>>dt;
    cout<<"diem ly:";
    cin>>dl;
    cout<<"diem hoa:";
    cin>>dh;
}
float thisinh::tongdiem(){
    return dt+dl+dh;
}
void thisinh::xuat(){
    cout<<setw(20)<<left<<hoten<<setw(20)<<left<<msv<<setw(15)<<left<<dt<<setw(15)<<left<<dl<<setw(15)<<left<<dh<<setw(15)<<left<<tongdiem()<<endl;
}
void nhapsv(thisinh *sv,int n){
    for(int i=0;i<n;i++){
        cout<<"-------------"<<endl<<"nhap sinh vien "<<i+1<<endl;
        sv[i].nhap();
    }
}
void xuatsv(thisinh *sv,int n){
    cout<<setw(20)<<left<<"HO TEN"<<setw(20)<<left<<"MA THI SINH"<<setw(15)<<left<<"DIEM TOAN"<<setw(15)<<left<<"DIEM LY"<<setw(15)<<left<<"DIEM HOA"<<setw(15)<<left<<"TONG DIEM"<<endl;
    for(int i=0;i<n;i++){
        sv[i].xuat();
    }
}
void maxtong(float &maxtongdiem,thisinh *sv,int &temp,int n){
    for(int i=0;i<n-1;i++){
        if(sv[i].tongdiem()<sv[i+1].tongdiem()){
            maxtongdiem=sv[i].tongdiem();
            temp=i;
        }else{
            maxtongdiem=sv[i+1].tongdiem();
            temp=i;
        }
    }
}
int main(){
    int n,temp=0;
    thisinh *sv;
    cout<<"so luong sinh vien: ";
    cin>>n;
    sv=new thisinh[n];
    float maxtongdiem=0;
    nhapsv(sv,n);
    xuatsv(sv,n);
    maxtong(maxtongdiem,sv,temp,n);
    cout<<endl<<"sinh vien co tong diem cao nhat la:"<<endl<<endl;
    cout<<setw(20)<<left<<"HO TEN"<<setw(20)<<left<<"MA THI SINH"<<setw(15)<<left<<"DIEM TOAN"<<setw(15)<<left<<"DIEM LY"<<setw(15)<<left<<"DIEM HOA"<<setw(15)<<left<<"TONG DIEM"<<endl;
    sv[temp].xuat();
    sort(sv,sv+n,sx);
    cout<<"sau khi sap xep:"<<endl<<endl;
    xuatsv(sv,n);
    delete[] sv;
}
