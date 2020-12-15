#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int mas[10];
	int length = sizeof(mas) / sizeof(mas[0]);
	for (int i = 0; i < length; i++) {
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> mas[i];
	}
	cout << "Ваш массив: ";
	for (int i = 0; i < length; i++) {
		cout << mas[i] << " ";
	}
}
