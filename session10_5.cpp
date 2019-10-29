#include <stdio.h>
#include <stdlib.h>
typedef struct sinhvien{
	char tensv[50];
	int tuoi;
	int diem_thi;
}svv;
int main(){
	struct sinhvien sv1; 
	svv sv2;
	sv1.tuoi = 20;
	printf("NHap ten sv:\n");
	scanf("%s",sv1.tensv);
	printf("Nhap tuoi sv:\n");
	scanf("%d",&sv1.tuoi);
	printf("Nhap diem thi\n");
	scanf("%d",&sv1.diem_thi);
	// mang sinh vien
	struct sinhvien mang_sv[30];
	for (int i = 0; i < 30; ++i)
	{
		printf("Nhap ten: \n");
		scanf("%s",mang_sv[i].tensv);
		printf("Nhap tuoi\n");
		scanf("%d",&mang_sv[i].tuoi);
		printf("Nhap diem thi\n");
		scanf("%d",&mang_sv[i].diem_thi);
	}
	// con tro
	struct sinhvien *controsv;
	controsv = (struct sinhvien*)malloc(30*sizeof(struct sinhvien));
	for (int i = 0; i < 30; ++i)
	{
		printf("Nhap ten:\n");
		scanf("%s",(controsv+i)->tensv);
		printf("Nhap tuoi:\n");
		scanf("%d",&(controsv+i)->tuoi);
		printf("Nhap diem thi:\n");
		scanf("%d",&(controsv+i)->diem_thi);
	}

	return 0;
}