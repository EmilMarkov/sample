#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

#define N1 10 //кол-во строк
#define N2 10 //кол-во столбцов
#define r1 10 //диапазон чисел в массиве | от 0 до r1

using namespace std;

void mass_init(int m[N1][N2], int rows, int cols, int r) { //инициализация двумерного массива
	for (int i = 0; i < rows; i++) //перебор строк
	{
		for (int j = 0; j < cols; j++) //перебор столбцов
		{
			m[i][j] = rand() % r;
		}
	}
} 

void mass_print_ut(int m[N1][N2], int rows, int cols) { //печать верхнего треугольника
	for (int i = 0; i < rows; i++) //печать массива полностью
	{
		for (int j = 0; j < cols; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows / 2; i++) //перебор верхней половины строк
	{
		for (int k = 0; k < i; k++) //перебор пробелов
		{
			cout << "  ";
		}
		for (int j = i; j < cols - i; j++) //перебор столбцов
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void mass_print_dt(int m[N1][N2], int rows, int cols) { //печать нижнего треугольника
	for (int i = 0; i < rows; i++) //печать массива полностью
	{
		for (int j = 0; j < cols; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = rows / 2; i < rows; i++) //перебор нижней половины строк
	{
		for (int k = 0; k < cols - 1 - i; k++) //перебор пробелов
		{
			cout << "  ";
		}
		for (int j = cols - 1 - i; j < i + 1; j++) //перебор столбцов
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void mass_print_rt(int m[N1][N2], int rows, int cols) { //печать правого треугольника
	for (int i = 0; i < rows; i++) //печать массива полностью
	{
		for (int j = 0; j < cols; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows; i++) //перебор строк
	{
		if (i >= 0 and i <= rows/2 - 1) //выборка столбцов из верхних строк
		{
			for (int k = 0; k < cols / 2 - 1 - i; k++) //перебор пробелов
			{
				cout << "  ";
			}
			for (int j = cols - 1 - i; j < cols; j++) //перебор столбцов
			{
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		else { //выборка столбцов из нижних строк
			for (int k = cols / 2; k < i; k++) //перебор пробелов
			{
				cout << "  ";
			}
			for (int j = i; j < cols; j++) //перебор столбцов
			{
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
	}
	cout << endl;
}

void mass_print_lt(int m[N1][N2], int rows, int cols) { //печать левого треугольника
	for (int i = 0; i < rows; i++) //печать массива полностью
	{
		for (int j = 0; j < cols; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows; i++) //перебор строк
	{
		if (i >= 0 and i <= rows/2 - 1) //выборка столбцов из верхней половины строк
		{
			for (int j = 0; j < i + 1; j++) //перебор столбцов
			{
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
		else { //выборка столбцов из нижней половины строк
			for (int j = 0; j < cols - i; j++) //перебор столбцов
			{
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
	}
	cout << endl;
}

int main() {
	srand((unsigned int)time(NULL));
	int m[N1][N2];

	mass_init(m, N1, N2, r1);
	mass_print_lt(m, N1, N2);
}