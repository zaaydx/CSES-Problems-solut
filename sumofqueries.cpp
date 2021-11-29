#include <iostream>
using namespace std;
 
int main()
{
	int x = 2 * 1E5;
	long long int a[x];
	long long int p[x];
	int n;
	int q;
 
	cin >> n>> q;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		p[i] = a[i] + p[i - 1];
	}
 
	while (q--)
	{
		int s;
		int f;
		cin >> s>> f;
		long long sum = p[f] - p[s - 1];
		cout << sum<< endl;
	}
}
