#include <stdio.h>
#include <iostream>
int main(){
	int x = 10;
	int *p;
	float *q;
	printf("x = %d\n",x);
	printf("Dia chi cua x: \n");
	std::cout << &x;
	p=  &x;
	printf("\n p = \n");
	std::cout << p;
	printf("gia tri cua o dia chi do: %d\n",*p);
	x +=5;
	printf("x sau khi tang them: %d \n",x);
	(*p)+=5;
	printf("Sau khi dung p de tang: %d\n",x);
	return 0;
}