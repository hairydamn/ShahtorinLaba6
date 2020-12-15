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
	int max = mas[0], min = mas[0];
	int id1, id2;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > max) 
		{
			max = mas[i];
			id1 = i;
		}
		if (min > mas[i])
		{
			min = mas[i];
			id2 = i;
		}

	}
	cout << "Максимальный элемент массива: " << max << endl;
	cout << "Минимальный элемент массива: " << min << endl;
	cout << "Вот так выглядит массив, если изменить максимальное и минимальное значение:";
	mas[id1] = min;
	mas[id2] = max;
	for (int i = 0; i < n; i++) 
	{
		cout << mas[i] << " ";
	}
}