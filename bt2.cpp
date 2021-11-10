#include<stdio.h>
int TongChuSo(int n){
	int sotachra;
	int s=0;
	for(;n!=0;){
		sotachra=n%10;
		s=s+ sotachra;
		n=n/10;
	}
	return s;
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	printf("Tong chu so la :%d",TongChuSo(n));
}
