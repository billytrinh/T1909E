#include <stdio.h>
int main(){
	int x =0;
	while(x<10){
		printf("day la print trong while\n");
		x++;
	}
	x=0;
 	do{
	 	printf("day la print trong do ..while \n");
 	}while(x > 0);

 	for (int i = 0; i < 10; ++i)
 	{
 		printf("Day la vong lap for...\n");
 	}

 	for (int i = 10; i > 0; --i)
 	{
 		/* code */
 	}
 	for (;x<4;)
 	{
 		x++;
 		printf("x = %d\n",x);
 	}
 	

	return 0;
}