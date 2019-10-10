#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);
	printf("Nhap c=\n");
	scanf("%d",&c);
	if(a == 0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem\n");
			}else{
				printf("phuong trinh vo nghiem\n");
			}
		}else{
			printf("nghiem la: %f\n",(float)-c/b);
		}
	}else{
		int D;
		D = b*b - 4*a*c;
		if(D>0){
			float x1 = (float)(-b+sqrt(D))/(2*a);
			float x2 = (float)(-b-sqrt(D))/(2*a);
			printf("nghiem thu nhat: %f\n",x1 );
			printf("nghiem thu hai: %f\n",x2 );
		}else if(D == 0){
			printf("Hai nghiem cua pt: %f\n",(float)-b/(2*a));	
		}else{
			printf("Phuong trinh vo n\n");
		}
	}
	return 0;
}