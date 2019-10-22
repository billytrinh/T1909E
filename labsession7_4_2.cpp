#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for (int i = 0; i < n; ++i)
	{
		// NHap gia tri cho ary[i]
		int x;
		bool f=true;
		printf("Nhap gia tri ary[%d] = \n",i);
		scanf("%d",&x);
		while(f){
			bool trunglap = false;
			for (int j = 0; j < i; ++j)
			{
				if(ary[j] == x){
					trunglap = true;
					break;
				}
			}
			if(trunglap== false){
				f=false;
				ary[i] = x;
			}else{
				printf("Nhap lai gia tri ary[%d] = \n",i);
				scanf("%d",&x);
			}

		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d   ",ary[i]);
	}

	return 0;	
}