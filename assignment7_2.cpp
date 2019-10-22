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
	int x=0 ;
	for (int i = 0; i < n; ++i)
	{
		if(ary[i]> 0){
			x = ary[i];
			break;
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		if(ary[i] > 0 && ary[i] < x){
			x = ary[i];
		}
	}
	if(x != 0){
		printf("So duong nho nhat %d \n",x);
	}
	
	return 0;
}