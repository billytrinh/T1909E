#include <stdio.h>
#include <string.h>

void chuyenVietHoa(char s[]){
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i]>=97 && s[i]<=122){
			s[i] -=32;
		}
	}
	printf("chuoi sau khi chuyen hoa: %s\n",s);
}
void inracacchuoi(char s[][20],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("chuoi %d la: %s\n",i,s[i]);
	}
}
int main(){
	char s1[20],s2[20];
	int ar[10];
	char s3[5][20];
	for (int i = 0; i < 5; ++i)
	{
		scanf("%s",s3[i]);
	}	
	inracacchuoi(s3,5);	
	printf("Nhap chuoi 1:\n");
	scanf("%s",s1);//gets(str);
	printf("Nhap chuoi 2:\n");
	scanf("%s",s2);
	chuyenVietHoa(s1);
	printf("Do dai chuoi s1: %lu\n",strlen(s1));
	printf("Do dai chuoi s2: %lu\n",strlen(s2));

	printf("Chuoi dao nguoc cua s1: \n");
	for (int i = strlen(s1)-1; i >= 0; --i)
	{
		printf("%c",s1[i]);
	}
	printf("\n");

	printf("so sanh s1 va s2: %d\n",strcmp(s1,s2));

	printf("Vi tri cua ky tu l trong s1: %lu\n",strchr(s1,'l')-s1);

	strcat(s1,s2);
	printf("Chuoi s1 vua nhap la: %s \n",s1);
	printf("Chuoi s2 vua nhap la: %s \n",s2);

	strcat(s2,s1);
	printf("Chuoi s1 vua nhap la: %s \n",s1);
	printf("Chuoi s2 vua nhap la: %s \n",s2);

	strcpy(s1,s2);
	printf("Chuoi s1 vua nhap la: %s \n",s1);
	printf("Chuoi s2 vua nhap la: %s \n",s2);


	
	return 0;
}