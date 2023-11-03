#include<iostream>
using namespace std;
int tinhtong(int n,int &tong,int temp){

    do{
        tong=tong+n%10;
        n=n/10;
        temp++;
    }while(n!=0);
   return tong;
}
int main(){
    int n,temp=0,tong=0;
    cout<<"nhap n=";
    cin>>n;
    cout<<"tong="<<tinhtong(n,tong,temp);
}