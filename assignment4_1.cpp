#include <stdio.h>
int main(){
	int a,b,c;
	do{
		printf("Nhap canh thu nhat:\n");
		scanf("%d",&a);
		printf("Nhap canh thu hai:\n");
		scanf("%d",&b);
		printf("Nhap canh thu ba:\n");
		scanf("%d",&c);
	}while(!(a+b>c && b+c>a && a+c>b));
	printf("Da duoc 3 canh tam giac\n");
	return 0;
}