#include <bits/stdc++.h>
using namespace std;

class diem {
private:
    float x, y;

public:
    friend istream& operator >> (istream &in, diem &a);
};

istream& operator >> (istream &in, diem &a) {
    cout << "nhap x=";
    in >> a.x;
    cout << "nhap y=";
    in >> a.y;
    return in;
}

class tamgiac {
private:
    diem a, b, c;

public:
    friend istream& operator >> (istream &in, tamgiac &t);
};

istream& operator >> (istream &in, tamgiac &t) {
    cout << "nhap diem A:" << endl;
    in >> t.a;
    cout << "nhap diem B:" << endl;
    in >> t.b;
    cout << "nhap diem C:" << endl;
    in >> t.c;
    return in;
}

int main() {
    tamgiac tg;
    cout << "nhap toa do tam giac ABC" << endl;
    cin >> tg;
    
    // Bây giờ bạn đã có giá trị đầu vào cho các điểm A, B và C trong đối tượng tamgiac.

    return 0;
}
