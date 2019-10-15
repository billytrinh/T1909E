#include <stdio.h>
int main(){
	int ary[10];
	ary[0] = 20;
	ary[5] = 7;
	ary[9] = 11+22*4+33;
	for (int i = 0; i < 10; ++i)
	{   
		printf("Nhap phan tu thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	int max = ary[0];
	int min= ary[0];
	for (int i = 0; i < 10; ++i)
	{
		if(max < ary[i]){
			max= ary[i];
		}
		if(min > ary[i]){
			min = ary[i];
		}
	}
	printf("Max = %d\n",max);
	printf("Min = %d\n",min);
	int g_max = min,g_min=max;
	/*
	for (int i = 0; i < 10; ++i)
	{
		if(ary[i] < max){
			g_max = ary[i];
			break;
		}
	}
	*/
	for (int i = 0; i < 10; ++i)
	{
		if(g_max < ary[i] && ary[i] < max){
			g_max = ary[i];
		}
		if(g_min > ary[i] && ary[i] > min){
			g_min = ary[i];
		}
	}
	return 0;
}