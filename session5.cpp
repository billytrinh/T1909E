#include <stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	// Tim cac so nguyen to nho hon n
	
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}