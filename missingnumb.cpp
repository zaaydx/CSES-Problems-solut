#include <stdio.h>

int main()
{
	long long numb;
	
	scanf("%lld", &numb);
	long long count = (numb * (numb + 1) / 2);
	int n;
	for (int i = 1; i < numb; i++)
	{
		scanf("%d", &n);
		count -= n;	
	}
	printf("%lld", count);
}
