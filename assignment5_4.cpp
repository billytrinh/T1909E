#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n=\n");
	scanf("%d",&n);
	int S=0;
	for (int i = 1; i < n; ++i)
	{
		if(n%i==0){
			S+=i;
		}
	}
	if(S==n){
		printf("%d la so hoan hao\n",n);
	}else{
		printf("%d khong phai\n",n);
	}
	return 0;
}