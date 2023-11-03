#include<iostream>
using namespace std;
class tamgiac{
    private:
        float a,b,c;
    public:s
        tamgiac();
        friend void xuat(tamgiac tg);
        friend void nhap(tamgiac &tg);
        friend void test(tamgiac tg);
};
void test(tamgiac tg){
    if(tg.a+tg.b>tg.c||tg.a+tg.c>tg.b||tg.b+tg.c>tg.a){
        cout<<endl<<"3 canh co tao thanh tam giac"<<endl;
        if(tg.a==tg.b&&tg.b==tg.c&&tg.a==tg.c){
            cout<<"day la tam giac deu"<<endl;
        }else{
            if(tg.a==tg.b||tg.b==tg.c||tg.a==tg.c){
                if(tg.a*tg.a+tg.b*tg.b==tg.c*tg.c||tg.a*tg.a+tg.c*tg.c==tg.b*tg.b||tg.b*tg.b+tg.c*tg.c==tg.a*tg.a){
                    cout<<"day la tam giac vuong can"<<endl;
                }else{
                    cout<<"day la tam giac can"<<endl;
                }
            }else{
                if(tg.a*tg.a+tg.b*tg.b==tg.c*tg.c||tg.a*tg.a+tg.c*tg.c==tg.b*tg.b||tg.b*tg.b+tg.c*tg.c==tg.a*tg.a){
                    cout<<"day la tam giac vuong"<<endl;
                }else{
                    cout<<"day la tam giac thuong"<<endl;
                }
            }
        }
    }else{
        cout<<"day khong phai la tam giac"<<endl;
    }
}
void nhap(tamgiac &tg){
    cout<<"a=";
    cin>>tg.a;
    cout<<"b=";
    cin>>tg.b;
    cout<<"c=";
    cin>>tg.c;
}
tamgiac::tamgiac(){
    a=b=c=0;
}
void xuat(tamgiac tg){
    cout<<"---------------"<<endl;
    cout<<"a="<<tg.a<<endl;
    cout<<"b="<<tg.b<<endl;
    cout<<"c="<<tg.c<<endl;
}
int main(){
    tamgiac tg;
    nhap(tg);
    xuat(tg);
    test(tg);
    
}

