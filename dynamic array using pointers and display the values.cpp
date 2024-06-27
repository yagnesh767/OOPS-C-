#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    int value = 1;
    for (int i = 0; i < size; ++i) {
        arr[i] = value++;
    }
    cout << "Values in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
