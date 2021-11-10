#include <iostream>
using namespace std;

long long int power(long long int a, long long int x)
{
	long long int n;

	for (int i = 0; i < n; i++)
	{
		const int mod = (10e9) + 7;
		int result = 1;
		while (x)
		{
			if (x % 2)
			{
				result = (result * a) % mod;
				x--;
			}
			else
				a = (a * a) % mod;
				x = x>>1;
		}
		return (result);
	}
	return (0);
}

int main()
{
	long long int n, a, b;

	cin >> n;
	cin>>a>>b;
	cout<<power(a, b)<<'\n';
}
