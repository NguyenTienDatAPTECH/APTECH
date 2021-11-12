#include<stdio.h>
float Average(int arr[], int number){
	int sum = 0;
	int count = 0;
	float Average = 0;
	for(int i=0;i< number; i++){
		sum+=arr[i];
		count ++;
	}
	Average =(float) sum / count;
	return Average;
}
int main(){
	int size;
	printf("Input size of array :");
	scanf("%d",&size);
	int arr[size];
	for(int i =0;i<size;i++){
		printf("Input number at position %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Average: %f \n",Average(arr,size));
	return 0;
}
