#include <iostream>
using namespace std;

int faсtorial(int n)
{
	int i, x;
	x = 1;
	for (i = 1; i <= n; i++)
	{
		x *= i;
	};

	return x;
}

int main()
{
	int n;
	cin >> n;
	cout << "1" << "\n";
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << (faсtorial(i) / (faсtorial(j) * faсtorial(i - j))) << " ";
		};
		cout << "\n";
	};
	return 0;
}