#include <iostream>
using namespace std;

//定义一个应用起泡排序原理的函数用来排序
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//主函数（主程序）
int main() {
    int size;
    cout << "请输入数组的元素个数：" << endl;
    cin >> size;
    int* array = new int[size];
    cout << "请输入数组的元素，用空格隔开：" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "你输入的数组是：" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    sortArray(array, size);
    cout << "排序后的数组是：" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
    return 0;
}
