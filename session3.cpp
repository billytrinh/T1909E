#include <stdio.h>
int main(){
	switch(5*10+15){
		case 1: printf("So 1 phai khong?\n");break;
		case 10: printf("So 10 phai khong?\n");break;
		case 20: printf("So 20 phai khong?\n");break;
		case 65: printf("So 65 phai khong?\n");break;
		default: printf("Khong thay so nao ca\n");
	}

	char h;
	printf("nhap h:\n");
	h = getchar();//tuong duong scanf("%c",&h);
	putchar(h);//tuong duong printf("%c",h);
	switch(h){
		case 'y': printf("Tiep tuc cai win\n");break;
		case 'Y': printf("Tiep tuc cai win\n");break;
		case 'n': printf("dung chuong trinh\n");break;
		case 'N': printf("dung chuong trinh\n");break;
	}

	return 0;
}