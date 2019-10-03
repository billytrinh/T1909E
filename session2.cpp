#include <stdio.h>
int main(){
	int x;
	int k;
	float y;
	double z;
	char h;
	printf("Xin chao T1909E\n");
	x = 10;
	k= 5;
	y = 3.14+5;
	h= 'a';
	printf("x =  %d haha\n",x);
	x = k + 10;
	printf("x =  %d haha\n",x);
	x = x + 20;
	printf("x =  %d haha\n",x);
	x = x /5;
	printf("x =  %d xin\n",x);
	x = x +h;
	y = x + 30.5;
	printf("y = %f\n",y);
	x = (int)(x + 3.14);
	scanf("%d",&x);
	scanf("%f",&y);
	printf("y vua nhap: %f\n", y);
	return 0;
}