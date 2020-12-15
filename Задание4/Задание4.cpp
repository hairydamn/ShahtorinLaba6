#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "ru");
	int n;
	cout << "Введите длину массива от 1 до 30" << endl;
	cin >> n;
	bool proverka = true;
	while (proverka == true) 
	{
		if (n < 1 || n > 30) 
		{
			cout << "Попробуйте ещё раз" << endl;
			cin >> n;
		}
		else 
		{
			break;
		}
	}
	int* mas = new int[n];
	for (int i = 0; i < n; i++) 
	{
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> mas[i];
	}
	cout << "\n";
	cout << "Вот так выглядит массив: ";
	for (int i = 0; i < n; i++) 
	{
		cout << mas[i] << " ";
	}
	cout << "\n";
	int min = mas[0], nomer = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < min) 
		{
			min = mas[i];
			nomer = i + 1;
		}
	}
	cout << "Минимальный элемент массива " << min << " с порядковым номером " << nomer;
	cout << "\n";
}
