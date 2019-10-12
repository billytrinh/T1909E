#include <stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	for (int i = 2; i < n; ++i)
	{
		// kiem tra 1 so la nguyen to
		int dem=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				dem++;
				break;
			}
		}
		if(dem == 0){
			printf("%d\n",i);
		}
	}
	return 0;
}