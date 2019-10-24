#include <stdio.h>
int binhphuongtong(int a,int b){
	int x = a+b;
	x = x*x;
	return x;
}
int binhphuong(int x){
	return x*x;
}
int songaunhien(){
	return 11;
}
void inramenu(){
	printf("Tinh binh phuong 20 = %d\n",binhphuong(20));
	printf("1. Ca\n");
	printf("2. Tom\n");
	printf("3. Ga\n");
}

int timsonghichdao(int x){
	int t=0;
	while(x !=0){
		t = t*10+x%10;
		x/=10;
	}
	return t; // t la so nghich dao tim duoc
}
// n la kich thuoc mang
void inmangsonguyen(int ary[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d \n",ary[i]);
	}
}
void nhapmang(int ary[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("nhap:\n");
		scanf("%d",&ary[i]);
	}
}
void inmangsonguyencach2(int *ary){
	for (size_t i = 0; i < sizeof(ary)/sizeof(int *); ++i)
	{
		printf("%d \n",ary[i]);
	}
}
bool checksoduong(int a){
	return a > 0;
}
int main(){
	int ary[5] = {3,1,5,6,2};
	//inmangsonguyen(ary,5);
	inmangsonguyencach2(ary);
	if(checksoduong(5)){

	}
	bool kq = checksoduong(-12);
	int a = 10,b=20;
	// day la su dung
	int z = binhphuongtong(a,b);
	printf("z = %d\n",z);
	printf("tong 2 = %d\n",binhphuongtong(15,22));
	inramenu();
	printf("nghich dao cua 1234 la %d\n",timsonghichdao(1234));
	printf("nghich dao cua 1314343 la %d\n",timsonghichdao(1314343));

	return 0;
}