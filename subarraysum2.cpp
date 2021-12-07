#include <iostream>
#include <map>
#include <string>
 
using namespace std;
int main()
{
    
	long long int mod = 2 * 1e5;
	long long int k;
	long long int str[mod];
	long long int n = sizeof(str) / sizeof(str[0]);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
    map<long long int, long long int> numbers;
	long long int sum = 0;
	long long int count = 0;
	for(int i = 0; i < n; i++)
	{
	
		sum += str[i];
		if (sum == k)
			count++;
		if (numbers.find(sum - k) != numbers.end())
			count += numbers[sum - k];
		numbers[sum]++;;
	}
	cout << count;
}
