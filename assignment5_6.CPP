#include <stdio.h>
int main(){
	int n;
	bool cs = true;
	while(cs){
		do{
			printf("Chon chuc nang:\n");
			printf("1. Chon mon an\n");
			printf("2. Chon do uong\n");
			printf("3. thanh toan\n");
			printf("4. thoat\n");
			scanf("%d",&n);
		}while(n<1 || n>4);

		switch(n){
			case 1: {
				int choose;
				bool cs1 = true;
				while(cs1){
					do{
						printf("Chon mon an:\n");
						printf("1. Bo\n");
						printf("2. Ga\n");
						printf("3. Vit\n");
						printf("4. Quay lai menu\n");
						scanf("%d",&choose);
					}while(choose < 1 || choose > 4);
					if(choose == 1){
						printf("Chon con bo\n");
					}else if(choose == 2){
						printf("Chon mon Ga\n");
					}else if(choose == 3){
						printf("Chon mon Vit\n");
					}else if(choose==4){
						cs1 = false;	
					}
				}
				break;
			}
				
			case 2: {
				int choose2;
				bool cs2 = true;
				while(cs2){
					do{
						printf("Chon do uong:\n");
						printf("1. Bia\n");
						printf("2. Nuoc ngot\n");
						printf("3. Sinh to\n");
						printf("4. Quay lai menu\n");
						scanf("%d",&choose2);
					}while(choose2 < 1 || choose2 > 4);
					if(choose2 == 1){
						printf("Chon bia\n");
					}else if(choose2 == 2){
						printf("Chon nuoc ngot\n");
					}else if(choose2 == 3){
						printf("Chon sinh to\n");
					}else if(choose2==4){
						cs2 = false;	
					}
				}
				break;
			}
						
			case 3: {
				printf("Tinh tien: 30000\n");break;
			}

			case 4:{
				cs = false;break;		
			}
		}
	}

	return 0;
}