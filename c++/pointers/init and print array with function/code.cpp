#include <iostream>
#include <cstdlib>
#include <ctime>

#define N1 5
#define r1 10

using namespace std;

void mass_init(int *m, int n, int r) { // m - одномерный массив, n - размер массива, r - число для указания диапазона чисел
	int *pointer_c; // текущий указатель
	for (pointer_c = m; pointer_c < (m + n); pointer_c++)
	{
		*pointer_c = rand() % (r * 2 + 1) - r;
	}
}

void mass_print(int *m, int n) {
	int *pointer_c; // текущий указатель
	for (pointer_c = m; pointer_c < (m + n); ++pointer_c)
	{
		cout << *pointer_c << " ";
	}
}

int main() {
	srand((unsigned int)time(NULL));
	int m[N1];

	mass_init(m, N1, r1);
	mass_print(m, N1);
}