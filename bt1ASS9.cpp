#include<stdio.h>
int SNTLonHon(int n){
	int i;
	for(i=n+1;;i++){
		int count =0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}if(count==2){
			break;
		}
	}return i;
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("So nguyen to tiep theo cua %d la :%d",n,SNTLonHon(n));
}
