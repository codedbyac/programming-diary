#include<stdio.h>
void bubblesort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int n,i;
	printf("Enter the number of elemetnts: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the %d elements: ",n);
	for(i=0;i<n;i++){
		printf("Sorted array:\n");
    scanf("%d",&arr[i]);
}
bubblesort(arr,n);

		
		for(i=0;i<n;i++){
			printf("Unsorted array:\n");
			printf("%d ",arr[i]);
		}
	
	return 0;
}
