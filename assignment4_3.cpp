#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x1=1,x2=1,x3=2;
	for (int i = 4; x2+x3 <= n; ++i)
	{	
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("so Fibo 20: %d\n",x3);
	return 0;
}