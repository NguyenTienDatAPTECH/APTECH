#include<stdio.h>
#include<math.h>
int DienTich(int a,int  b,int c){
	int P=(a+b+c)/2;
	int S=sqrt(P*(P-a)*(P-b)*(P-c));
	return S;
}
int main(){
	int a,b,c,P,S;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	printf("Dien tich tam giac la: %d ",DienTich(a,b,c));
}
