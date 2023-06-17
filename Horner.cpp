#include <iostream>
#include <vector>
using namespace std;
double horner(const vector<double>& heSo, double x) {
    double ketQua = 0;
    for (vector<double>::const_reverse_iterator it = heSo.rbegin(); it != heSo.rend(); ++it) {
        ketQua = ketQua * x + *it;
    }
    return ketQua;
}
int main() {
    int bac; // Bậc của đa thức
    cout << "Nhap bac cua da thuc: ";
    cin >> bac;
    vector<double> heSo(bac + 1); // Khởi tạo vector heSo với kích thước bằng (bac + 1)
    //cout << "Nhap cac he so cua da thuc (tang dan theo bac):\n";
    for (int i = bac; i >= 0; --i) {
        cout << "Nhap he so thu " << i << ": ";
        cin >> heSo[i];
    }
    double x; // Điểm x để tính giá trị đa thức
    cout << "Nhap diem x: ";
    cin >> x;
    double ketQua = horner(heSo, x);
    cout << "Gia tri cua da thuc tai diem x = " << x << " la: " << ketQua << endl;
    return 0;
}
