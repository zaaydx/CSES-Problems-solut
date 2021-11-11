#include <iostream>
using namespace std;

int trailingzeros(int n)
{
    if (n < 0)
        return -1;

    // Initialize result
    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}

int main()
{
    int n ;
	cin >> n;
    cout << trailingzeros(n);
}
