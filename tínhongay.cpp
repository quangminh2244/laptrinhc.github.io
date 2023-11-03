/*t1-t3-t5-t7-t8-t10-t12-31
t2-28
t4-t6-t9-t11--30
*/
#include<iostream>
using namespace std;
int main(){
    int nam,tongsongay=0;
    int ngaydau,thangdau,namdau;
    int ngaycuoi,thangcuoi,namcuoi;
    int thangnamnhuan[20]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int namnhuan=366;
    int namthuong=365;
    int thangnamthuong[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"nhap ngay,thang,nam bat dau:";
    cin>>ngaydau>>thangdau>>namdau;
    cout<<"nhap ngay,thang,nam ket thuc:";
    cin>>ngaycuoi>>thangcuoi>>namcuoi;
    
    if(namdau==namcuoi){
        if(namdau%4==0){
            for(int i=thangdau;i<thangcuoi;i++){
            if(i==thangdau){
                tongsongay=thangnamnhuan[i]-ngaydau;
            }else{
                tongsongay=tongsongay+thangnamnhuan[i];
            }
        }
        tongsongay=tongsongay+ngaycuoi;
        }else{
            for(int i=thangdau;i<thangcuoi;i++){
            if(i==thangdau){
                tongsongay=thangnamthuong[i]-ngaydau;
            }else{
                tongsongay=tongsongay+thangnamthuong[i];
            }
            
        }
        tongsongay=tongsongay+ngaycuoi;
        }
    }else{
        for(int i=namdau;i<namcuoi;i++){
            if(i==namdau){
                if(namdau%4==0){
                    for(int i=thangdau;i<=12;i++){
                    if(i==thangdau){
                        tongsongay=thangnamnhuan[i]-ngaydau;
                    }else{
                        tongsongay=tongsongay+thangnamnhuan[i];
                    }
                    }
                }else{
                    for(int i=thangdau;i<=12;i++){
                    if(i==thangdau){
                        tongsongay=thangnamthuong[i]-ngaydau;
                    }else{
                        tongsongay=tongsongay+thangnamthuong[i];
                    }}}
            }else{
                if(i%4==0){
                    tongsongay=tongsongay+namnhuan;
                }else{
                    tongsongay=tongsongay+namthuong;
                }
            }
        }
        if(namcuoi%4==0){
            for(int i=1;i<thangcuoi;i++){
                tongsongay=tongsongay+thangnamnhuan[i];
        }
            tongsongay=tongsongay+ngaycuoi;
        }else{
            for(int i=1;i<thangcuoi;i++){
                tongsongay=tongsongay+thangnamthuong[i];
        }
            tongsongay=tongsongay+ngaycuoi;
        }
    }
    cout<<"tong so ngay la:"<<tongsongay;
}