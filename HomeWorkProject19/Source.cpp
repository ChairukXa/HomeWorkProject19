#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int CheckNum(int x);
int main()
{
	int num;
	printf("Enter Your Number: ");
	scanf("%d", &num);
	CheckNum(num);
	return 0;
}
int CheckNum(int x)
{
	if (x < 0)
	{
		printf("Please insert the number that is greater or equal zero");
	}
	else
	{
		if (x >= 80)
		{
			printf("A");
		}
		else if (x >= 70)
		{
			printf("B");
		}
		else if (x >= 60)
		{
			printf("C");
		}
		else if (x >= 50)
		{
			printf("D");
		}
		else
		{
			printf("F");
		}
	}
	return x;
}