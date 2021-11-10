#include <iostream>
using namespace std;

long long power(long long int a, long long int x, const int mod)
{
	if (x == 0)
	    return(1);
	long long result = power(a, x/2, mod);
	if (x % 2 == 1)
       return (((result * result) % mod) * a) % mod;
    return (result * result) % mod;
}

int main()
{
	long long int n;
	const int mod = 1e9 + 7;

	cin >> n;
	while (n --)
	{
	    int x;
		long long a, b, c;
		
		cin >> a >> b>> c;
		x = power(b, c, mod - 1);
		cout << power(a, x, mod) << '\n';
	}
}