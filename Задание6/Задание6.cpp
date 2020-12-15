#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	const int N = 200;
	int random[N]{};
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		random[i] = rand() % 41 - 20; // -20 ... 20
	}
	cout << "Рандомный массив: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << random[i] << "  ";
	}
	int chet = 0;
	for (int i = 0; i < N; i++) 
	{
		if (random[i] == random[i + 1])
		{
			chet = chet + 1;
		}
	}
	cout << "\n";
	cout << "Количество пар соседних элементов массива: " << chet;
	return 0;
}
