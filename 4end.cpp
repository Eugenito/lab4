#include <iostream>
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a[10] = { 1,3,5,6,10,11,12,13,4,7 };
	int quantity = 0;
	for (int i = 0;i < 10;i++)
	{
		if (a[i + 1] < a[i])
		{
			quantity += 1;
		}
	}
	printf("%d", quantity);
	return 0;
}
