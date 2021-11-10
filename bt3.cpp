#include<stdio.h>
int ChuVi(int a, int b,int c){
	
	int P=a+b+c;
	return P;
}
int main(){
	int a,b,c,P;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	printf("chu vi cua tam giac la %d",ChuVi(a,b, c));
}
