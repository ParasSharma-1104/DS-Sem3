#include <iostream>
using namespace std;
int main() {
    int r, c;
    int arr[50][50];
    cout << "no of rows: ";
    cin >> r;
    cout << "no of columns: ";
    cin >> c;
    cout << "Enter elements :\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "\nSum of each row:\n";
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }
    cout << "\nSum of each column:\n";
    for (int j = 0; j < c; j++) {
        int colSum = 0;
        for (int i = 0; i < r; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }
    return 0;
}
