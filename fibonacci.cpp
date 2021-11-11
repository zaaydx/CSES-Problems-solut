#include <map>
#include <iostream>
using namespace std;

#define long long long
const long mod = (1e9) + 7;
map<long, long> F;

long fibonacci(long n)
{
	if (F.count(n))
		return F[n];
	long k = n / 2;
	if (n % 2 == 0)
	{
		return F[n] = (fibonacci(k) * fibonacci(k) + fibonacci(k - 1) * fibonacci(k - 1)) % mod;
	}
	else
	{
		return F[n] = (fibonacci(k) * fibonacci(k + 1) + fibonacci(k - 1) * fibonacci(k)) % mod;
	}
}

int main()
{
	long n;
	F[0] = F[1] = 1;
	cin >> n;
	cout << (n == 0 ? 0 : fibonacci(n - 1)) << endl;
}
