#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int dem=0;
	// while(i<=n){
	// 	if(n%i==0){
	// 		dem++;
	// 	}
	// 	i++;
	// }
	for(int i=1;i<=n;i++){
		if(n%i==0){
			dem++;
		}
	}

	if(dem != 2){
		printf("Khong phai so nguyen to\n");
	}else{
		printf("la so nguyen to\n");
	}
	return 0;
}