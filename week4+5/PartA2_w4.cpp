#include <bits/stdc++.h>\

using namespace std;

int main() {
    char arr1[10]; // Mảng có kích thước 10

//    char arr2[4] = "abcd"; //khởi tạo dài hơn so với kích thước của mảng

    char arr3[] = "abcd";

    cout << "Mảng arr1: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr1[i];
    }
    cout << endl;
    cout << "Xâu kí tự arr1: " << arr1 << endl;
    cout << "Mảng arr2: ";
//    for (int i = 0; i < 4; ++i) {
//        cout << arr2[i];
//    }
//    cout << endl;
//    cout << "Xâu kí tự arr2: " << arr2 << endl;

    cout << "Mảng arr3: ";
    for (int i = 0; i < strlen(arr3); ++i) {
        cout << arr3[i];
    }
    cout << endl;

    cout << "Xâu kí tự arr3: " << arr3 << endl;

    cout << "Kích thước mảng arr3: " << sizeof(arr3) << " bytes" << endl;
    /*
    Kích thước mảng arr3 là 5 bytes (bao gồm 4 ký tự và kí tự null chặn cuối).
    Xâu kí tự có thể ngắn hơn mảng, nhưng không thể dài hơn kích thước khai báo của mảng.
    Mảng kích thước N lưu được string độ dài tối đa là N - 1 (do kí tự null chặn cuối).
    */
    return 0;
}


