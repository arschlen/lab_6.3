#include <iostream>
using namespace std;

void InputArray(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "ellement " << i + 1 << ": ";
        cin >> mas[i];
    }
}

int main() {
    const int SIZE = 5;
    int a[SIZE];

    InputArray(a, SIZE);

    cout << "vved mass: ";
    for (int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
