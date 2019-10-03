#include <stdio.h>
int main(){
	int num;
	int x =10;
	scanf("%d",&num);
	if(num > 0){
		printf("Day la so duong\n");
	}else{
		if(num==0){
			printf("day la so 0\n");	
		}else{
			printf("day la so am\n");
		}
	}
	return 0;
}