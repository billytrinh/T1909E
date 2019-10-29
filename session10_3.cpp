#include <stdio.h>
int main(){
	int ary[5] = {1,3,5,7,9};
	printf("%d\n",ary[0]);
	printf("%d\n",ary[1]);
	printf("%d\n",ary[2]);
	printf("%d\n",ary[3]);
	printf("%d\n",ary[4]);

	printf("%d\n",*(ary+0)); // ary[0] <=> *(ary+0)
	printf("%d\n",*(ary+1));// ary[1] <=> *(ary+1)
	printf("%d\n",*(ary+2));
	printf("%d\n",*(ary+3));
	printf("%d\n",*(ary+4));

	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",*(ary+i));
	}

	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",ary+i);
	}

	return 0;
}