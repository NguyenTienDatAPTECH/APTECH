#include<stdio.h>
int UCLN(int a, int b){
	if(b==0){
		return a;
	}return UCLN(b,a%b);
		
	}

int main(){
	int a,b;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("uoc chung lon nhat la :%d",UCLN(a,b));
	int BCNN=(a*b)/UCLN(a,b);
	printf("\nBoi chung nho nhat la :%d",BCNN);
}
