#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int sum = 0, num;
	char s[100];
	scanf("%s", &s);
	while (strlen(s) >= 2)
	{
		sum = 0;
		for (int i = 0; i < strlen(s); i++)
		{
			num = (int)(s[i] - '0');
			sum += num;
		}
		sprintf(s, "%d", sum);
	}
	printf("%d", sum);
	return 0;
}