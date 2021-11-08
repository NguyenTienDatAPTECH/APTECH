#include<stdio.h>
int main(){
	int n;
	printf("nhap vao n =");
	scanf("%d",&n);
	int arr[n];
		printf("nhap danh sach cac so  :",n);
		
	for(int i=0;i<n;i++){
		printf("\nnhap so thu %d :",i);
		scanf("%d",&arr[i]);
		int j=i-1;
		int gtkt=arr[i];
		for(int j=0; j<n-1;j++){
			if(arr[i]>arr[j]){
				int gtkt=arr[i];
				arr[j]=arr[i];
				arr[j]=gtkt;
			}
			
		}printf("sau khi sap xep : \n");
		for(int i=0;i<n;i++){
			printf(":%d\t",arr[i]);
		}
	}
}
