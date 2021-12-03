#include <iostream>
using namespace std;

int main()
{
	int Q, n;
	cin >> n >> Q;

	int matrix1[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			char ch;
			cin >> ch;
			if (ch == '*')
				matrix1[i][j] = 1;
			else
				matrix1[i][j] = 0;
		}
	}

	int matrix2[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix2[i][j] = matrix1[i][j];
			if (i > 0)
				matrix2[i][j] += matrix2[i - 1][j];
			if (j > 0)
				matrix2[i][j] += matrix2[i][j - 1];
			if (i > 0 && j > 0)
				matrix2[i][j] -= matrix2[i - 1][j - 1];
		}
	}

	while (Q--)
	{
		int i1, j1, i2, j2;
		cin >> i1>> j1>> i2>> j2;
		i1--; j1--; i2--; j2--;

		int sum = matrix2[i2][j2];
		if (j1 > 0)
			sum -= matrix2[i2][j1 - 1];
		if (i1 > 0)
			sum -= matrix2[i1 - 1][j2];
		if (i1 > 0 && j1 > 0)
			sum += matrix2[i1 - 1][j1 - 1];

		cout << sum << "\n";
	}
	return 0;
}
