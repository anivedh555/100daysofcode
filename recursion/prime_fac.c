#include<stdio.h>

int prime(int n){
	static int i=2;
	if(i<=n)
{
	if(n%i==0){
	printf("%d",i);
	n=n/i;
	}
	else{
	i++;
	prime(n);
	}
	return;
}
}

int main(){
	int x;
	scanf("%d",&x);
	prime(x);
	return 0;
}


