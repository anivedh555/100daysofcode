#include<stdio.h>

long long int fact(int n)
{
	if(n<0)
	return 0;
	else if(n==1)
	return 1;
	else
{
	return n*fact(n-1);
}
}
int main()
{
	long long int no;
	scanf("%d",&no);
	long long int x=fact(no);
	printf("%d",x);
	return 0;
}

