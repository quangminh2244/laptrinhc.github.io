#include<bits/stdc++.h>
using namespace std;
class diem{
    private:
    float x,y;
    public:
    friend istream& operator >> (istream &in,diem &a);
    friend float khoangcach(diem a,diem b);
    friend ostream& operator << (ostream &out,diem a);
};
class tamgiac{
    private:
    diem a,b,c;
    public:
    friend istream& operator >>(istream &in,tamgiac &t);
    friend ostream& operator <<(ostream &out,tamgiac t);
    friend float dodai(tamgiac t);
};
istream& operator >> (istream &in,diem &a){
    cout<<"x=";
    in>>a.x;
    cout<<"y=";
    in>>a.y;
    return in;
}
ostream& operator << (ostream &out,diem a){
    out<<"("<<a.x<<","<<a.y<<")";
    return out;
}
istream& operator >> (istream &in,tamgiac &t){
    cout<<"nhap diem A:"<<endl;
    in>>t.a;
    cout<<"nhap diem B:"<<endl;
    in>>t.b;
    cout<<"nhap diem C:"<<endl;
    in>>t.c;
    return in;
}
ostream& operator <<(ostream &out,tamgiac t){
    out<<"3 dinh cua tam giac la :"<<endl;;
    out<<"A"<<t.a<<endl;
    out<<"B"<<t.b<<endl;
    out<<"C"<<t.c<<endl;
    return out;
}
float khoangcach(diem a,diem b){
    return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}
float dodai(tamgiac t){
    cout<<endl<<"do dai 3 canh cua tam giac la :"<<endl;
    cout<<"AB="<<khoangcach(t.a,t.b)<<endl;
    cout<<"BC="<<khoangcach(t.b,t.c)<<endl;
    cout<<"AC="<<khoangcach(t.a,t.c)<<endl;
    return 0;
}
int main(){
    tamgiac t;
    diem a,b;
    cout<<"nhap diem A"<<endl;
    cin>>a;
    cout<<"nhap diem B"<<endl;
    cin>>b;
    cout<<"khoang cach giua 2 diem A-B="<<fixed<<setprecision(2)<<khoangcach(a,b)<<endl;
    cout<<endl<<"nhap tam giac ABC"<<endl;
    cin>>t;
    cout<<endl<<t;
    dodai(t);
}