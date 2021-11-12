#include<stdio.h>
int main(){
	int n;
	printf("vui long nhap vao n =");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao so thu %d: \n",i);
		scanf("%d",&arr[i]);
	}
	int EvenNumber=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2==0){
			EvenNumber = arr[i];
		}
	}
	if(EvenNumber != 0){
		printf("Last even number : %d",EvenNumber);
	}else{
		printf("No Even number");
	}
}
