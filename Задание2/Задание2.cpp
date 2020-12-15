#include <iostream>

using namespace std;


int main() {
	setlocale(0, "ru");

	int n;
	cout << "Введите длину массива от 1 до 20" << endl;
	cin >> n;

	bool p = true;
	while (p == true) {                                                                                               
		if (n < 1 || n > 20) {
			cout << "Попробуйте ещё раз" << endl;
			cin >> n;
		}
		else {
			break;
		}
	}

	int* mas = new int[n];

	for (int i = 0; i < n; i++) {                                                                                                  
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> mas[i];
	}

	cout << "\n";

	cout << "Вот так выглядит массив: ";
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}

	cout << "\n";

	for (int i = 0; i < n; i++)                                                                                                     
		if (mas[i] < 0)
			mas[i] = 0;

	cout << "Вот так выглядит массив без отрицательных значений с заменой их на 0: ";
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";

	cout << "\n";
}
