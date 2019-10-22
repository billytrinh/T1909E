#include <stdio.h>
int main(){
	int n;
	printf("Nhap n =\n");
	scanf("%d",&n);
	int ary[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap phan tu ary[%d]\n",i);
		scanf("%d",&ary[i]);
	}
	int x =0;
	int y = 0;
	for (int i = 0; i < n; ++i)
	{
		if(ary[i] %2 != 0){
			x = ary[i];
			y = i;
		}
	}
	if(x != 0){
		printf("So le cuoi cung %d o vi tri %d\n",x,y);
	}
	
	return 0;
}