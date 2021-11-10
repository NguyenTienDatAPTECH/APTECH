#include<stdio.h>
int BCNN(int a,int b){
	int UCLN=a%b;
	if(b==0){
		return a;
	}
	return BCNN(a*b/UCLN);
}
int main(){
	int a,b;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("Boi chung nho nhat la :%d",BCNN(a,b));
}
