#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("nhap so luong chuoi  nhap vao: ");
	scanf("%d",&n);
	char arrS[n][50]; // 1 mang 2 chieu char co n*50 ky tu <=> mang 1 chieu n chuoi~
	for(int i=0;i<n;i++){
		printf("nhap chuoi thu %d",i);
		scanf("%s",arrS[i]);
	}
	// sap xep chuoi theo thu tu alphabe
	for(int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if(strcmp(arrS[j],arrS[j+1])>0){
				char tmp[50];
				strcpy(tmp,arrS[j]);
				strcpy(arrS[j],arrS[j+1]);
				strcpy(arrS[j+1],tmp);
			}
		}
	}
	printf("Sau khi sap xep xong, thu tu se la : \n");
	for(int i=0;i<n;i++){
		printf("%s",arrS[i]);
	}
}
