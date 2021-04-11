#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#pragma warning (disable:4996);
void Inverse(char str,int m)
{
	char p;
	for (int i = 0; i < m-1; ++i)
	{
		p=str[i];
		str[i] = str[m - i - 1];
		str[m - i - 1] = p;
	}
	return *str;
}

int main()
{
	char str[] = "abcdefg";
	int m = strlen(str);
	Inverse(str,m);
	printf("%s\n", str[m]);
	system("pause");
	return 0;
}
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int *p = arr;
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i)
	{
		printf("%d ", *p);
		++p;
	}
	system("pause");
	return 0;
}
*/
/*
void PrintArr(int *p,int m)
{
	for (int i = 0;i <m ; ++i)
	{
		printf("%d ", *p);
		*++p;
	}
}
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	int m = sizeof(arr) / sizeof(arr[0]);
	PrintArr(p,m);
	system("pause");
	return 0;

}
/*
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	short *p = (short *)arr;
	for (int i = 0; i < 6; ++i)
	{
		*(p + i) = 0;
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t", *(arr + i));
	}
	system("pause");
	return 0;
}
*/