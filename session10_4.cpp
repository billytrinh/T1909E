#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int x = 10, y = 20;
	swap(&x,&y);
	int *ary;
	//ary = (int *)malloc(5*sizeof(int));
	ary = (int *)calloc(5,sizeof(int));
	// int ary[5];
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",ary+i);
	}
	printf("cac so vua nhap\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t",*(ary+i));
	}
	ary = (int *)realloc(ary,8*sizeof(int));
	for (int i = 5; i < 8; ++i)
	{
		scanf("%d",ary+i);
	}
	printf("cac so vua nhap\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t",*(ary+i));
	}
	//ary = (int *)realloc(ary,0*sizeof(int));
	free(ary);

	return 0;
}