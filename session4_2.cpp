#include <stdio.h>
int main(){
	int x;
	/*
	printf("Nhap x = \n");
	scanf("%d",&x);
	while(x %2 != 0){
		printf("Nhap x = \n");
		scanf("%d",&x);
	}
	*/
	do{
		printf("Nhap x = \n");
		scanf("%d",&x);
	}while(x%2!=0);
	
	printf("x = %d\n",x);
	return 0;
}