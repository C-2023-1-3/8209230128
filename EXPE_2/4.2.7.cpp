#include <iostream>
using namespace std;

//����һ��Ӧ����������ԭ��ĺ�����������
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
//��������������
int main() {
    int size;
    cout << "�����������Ԫ�ظ�����" << endl;
    cin >> size;
    int* array = new int[size];
    cout << "�����������Ԫ�أ��ÿո������" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "������������ǣ�" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    sortArray(array, size);
    cout << "�����������ǣ�" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
    return 0;
}
