//� ������ ������� ����� ��� ������� �������� � �������� �� ������ � ��������� ���������� �� 3
//���� ��� ������� ������, ���������� �� ���� ��� ���������, � ���� ������� ����� ����,
//�� �������� ��� � ��� ������� �� 3.



#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = { 1, 0, 2, 0, 0, 4, 5, 0, 6, 7 };

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {

            arr[i] = 3;
            if (i > 0) {
                arr[i - 1] = 3;
            }
            if (i < size - 1) {
                arr[i + 1] = 3;
            }
        }
    }


    cout << "��������� ����� ������:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}