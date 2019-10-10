#include <stdio.h>
int main(){
	int n;
	do{
		printf("Vui long chon chuc nang:\n" );
		printf("1. Goi do uong\n" );
		printf("2. Goi mon an\n" );
		printf("3. Tinh tien\n" );
		printf("4. Thoat chuong trinh\n" );
		scanf("%d",&n);
	}while(n>4||n<1);
	switch(n){
		case 1:printf("KH vua goi do uong\n");break;
		case 2:printf("KH vua goi mon an\n");break;
		case 3:printf("KH vua goi tinh tien\n");break;
		case 4:printf("KH vua thoat\n");break;
	}

	return 0;
}