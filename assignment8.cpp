#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n],x;
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ary[%d] = \n",i);
		scanf("%d",&ary[i]);
	}
	printf("Nhap x = \n");
	scanf("%d",&x);
	int i = 0;
	for ( i = 0; i < n; ++i)
	{
		if(x == ary[i]){
			printf("%d nam trong mang vua nhap\n",x);
			printf("Tai vi tri gan nhat: %d\n",i);
			break;
		}
	}
	if(i >= n){
		printf("%d khong nam trong mang\n",x);
	}

	return 0;
}