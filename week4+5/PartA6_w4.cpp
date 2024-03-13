#include <iostream>
#include <ctime>
using namespace std;

void generateRandomArray(int arr[], int size) {
    srand(time(nullptr)); // Khởi tạo seed cho số ngẫu nhiên
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1; // Số ngẫu nhiên từ 1 đến 100
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int N = 30;
    int myArray[N];
    generateRandomArray(myArray, N);
    cout << "Mảng ngẫu nhiên: ";
    printArray(myArray, N);
    bubbleSort(myArray, N);
    cout << "Mảng sau khi sắp xếp: ";
    printArray(myArray, N);

    return 0;
}
