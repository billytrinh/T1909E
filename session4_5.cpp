#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int dem=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			dem++;
			break;
		}
	}

	if(dem == 0){
		printf("la so nguyen to\n");
	}else{
		printf("Khong phai so nguyen to\n");
	}
	return 0;
}