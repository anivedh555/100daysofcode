#include<stdio.h>

int fact(int n, int a)
{
	if(n==0)
		return 1;
	else if(n<0)
		return 1;
	else
	{
		return n*fact(n-1,n*a);
	}
}
int main()
{
	int x,a=1;
	scanf("%d",&x);
	int f1=fact(x,a);
	printf("%d",f1);
	return 0;
	}

