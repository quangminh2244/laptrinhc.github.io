#include<iostream>
using namespace std;
int main() {
	int a[100];
    int n,i;
    cout<<"ban muon nhap bao nhieu so nguyen ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<endl<<"nhap a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"so chan la:";
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout<<a[i]<<",";
        }
    }
}