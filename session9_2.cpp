#include <stdio.h>
void nhapmang(int ary[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ary[%d]=\n",i );
		scanf("%d",&ary[i]);
	}
}
void inmang(int ary[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d \t",ary[i]);
	}
}	
void sapxepmang(int ary[],int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(ary[j]> ary[j+1]){
				int temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}
int main(){
	int ary[5];
	int ary2[2][5];
	nhapmang(ary,5);
	sapxepmang(ary,5);
	inmang(ary,5);
	return 0;
}