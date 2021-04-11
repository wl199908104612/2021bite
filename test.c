#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996);
/*
int main()
{
	int a, b;
	printf("please enter two numbers>");
	scanf("%d %d", &a, &b);
	printf("before swap: %d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after swap:%d %d\n", a, b);
	system("pause");
	return 0;
}



/*
int main()
{
	int a, b;
	printf("please enter two numbers>");
	scanf("%d %d", &a, &b);
	printf("before swap: %d %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after swap:%d %d\n",a,b);
	system("pause");
	return 0;
}

/*
int Count_one_bit(int m)
{
	int count = 0;
	while (m)
	{
		m=m&(m - 1);
			count++;
	}
	return count;
}
/*
int Count_one_bit(int m)
{
	int count = 0;
	//将m依次向右移i位，并让其与1按位与，若为1则本位为1，否则为0
	for (int i = 31; i >= 0;i--)
	{
		if ((m >> i) & 1)
			count++;
	}
	return count;
}
*/
/*
int Count_one_bit(int m)
{
	int count = 0;
	//将m每次对2求模，模为1则末尾为1，否则为0
	//将m再除以2
	while (m)
	{
		if (m % 2 == 1)
			count++;
		m /= 2;
	}
	return count;
}
*/
/*

int main()
{
	int m;
	printf("请输入一个数>");
	scanf("%d", &m);
	printf("共有%d 个bit 位为1 \n", Count_one_bit(m));
	system("pause");
	return 0;
}
/*
void Printbit(int m)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d", (m>>i) & 1);
	}
	printf("\n");
	for (int i = 30; i >= 0;i -= 2)
	{
		printf("%d",(m >> i) & 1);
	}
}
int main()
{
	int m;
	printf("请输入一个数>");
	scanf("%d", &m);
	Printbit(m);
	system("pause");
	return 0;
}

/*
int Diffnum(int m,int n)
{
	//先让m和n去异或，数字不同的位置上取异或后结果为1
	//然后计算其中1的个数
	int temp = m^n;
	int count = 0;
	while (temp)
	{
		temp = temp&(temp - 1);
		count++;
	}
	return count;
}*/
/*
int main()
{
	int m,n;
	//printf("请输入一组数>");
	scanf("%d %d", &m,&n);
 //	printf(" 共有%d bit不同", Difnum(m, n));
	system("pause");
	return 0;
}*/