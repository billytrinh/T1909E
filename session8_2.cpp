#include <stdio.h>
int main(){
	int ary[9] = {3,1,99,23,11,5,9,12,8};
	int temp,i;
	for (int j = 1; j < 9; ++j)
	{
		i = j-1;
		temp = ary[j];
		while((i>=0) && (temp< ary[i])){
			ary[i+1] = ary[i];
			i--;
		}
		ary[i+1] = temp;
	}
	for (int i = 0; i < 9; ++i)
	{
		printf("%d ", ary[i]);
	}

	return 0;
}