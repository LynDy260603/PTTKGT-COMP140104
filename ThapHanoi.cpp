

#include <iostream>
using namespace std;

void towerHN(int n, char source, char auxiliary, char destination)
{
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    towerHN(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerHN(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    do {
        cout << "Nhap vao so dia: ";
        cin >> n;
        if (n < 0) {
            cout << "Nhap so dia > 0: ";
            cin >> n;
        }
    } while (n < 0);

    cout << "Thu tu dich chuyen la: " << endl;
    towerHN(n, 'A', 'B', 'C');

    return 0;
}
