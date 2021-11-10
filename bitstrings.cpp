#include <iostream>

using namespace std;
const int mod = (int)(1e9 + 7);

int main()
{
	long long n;
	cin >> n;
	long long count = 1;
	for (int i = 0; i < n; i++)
	{
		count *= 2;
		count %= mod;
	}
	cout << count;
}
