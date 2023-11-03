#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

struct sinhvien {
    string hoten;
    string masv;
    string dtb;
};

int main() {
    sinhvien sv[100];
    int n;
    cout << "nhap so luong sinh vien ";
    cin >> n;
    cin.ignore();  // Bỏ qua ký tự newline còn lại trong bộ đệm sau cin >> n.

    for (int i = 0; i < n; i++) {
        cout << "sinh vien thu " << i + 1 << endl;
        cout << "nhap ho ten ";
        getline(cin, sv[i].hoten);
        cout << "nhap ma sinh vien ";
        getline(cin, sv[i].masv);
        cout << "nhap diem trung binh ";
        getline(cin, sv[i].dtb);
        cout<<"---------------------------"<<endl;
    }
    cout<<left<<setw(30)<<"HO VA TEN"<<left<<setw(30)<<"MA SV"<<left<<setw(30)<<"DIEM TRUNG BINH"<<endl;
    for(int i=0;i<n;i++){
        cout<<left<<setw(30)<<sv[i].hoten<<left<<setw(30)<<sv[i].masv<<left<<setw(30)<<sv[i].dtb<<endl;
    }

   
}
