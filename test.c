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
	//��m����������iλ����������1��λ�룬��Ϊ1��λΪ1������Ϊ0
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
	//��mÿ�ζ�2��ģ��ģΪ1��ĩβΪ1������Ϊ0
	//��m�ٳ���2
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
	printf("������һ����>");
	scanf("%d", &m);
	printf("����%d ��bit λΪ1 \n", Count_one_bit(m));
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
	printf("������һ����>");
	scanf("%d", &m);
	Printbit(m);
	system("pause");
	return 0;
}

/*
int Diffnum(int m,int n)
{
	//����m��nȥ������ֲ�ͬ��λ����ȡ������Ϊ1
	//Ȼ���������1�ĸ���
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
	//printf("������һ����>");
	scanf("%d %d", &m,&n);
 //	printf(" ����%d bit��ͬ", Difnum(m, n));
	system("pause");
	return 0;
}*/