#include<stdio.h>
int main(){
	int N,pos,num;
	printf("Enter the  number of Array Element\n");
	scanf("%d",&N);
	
		int arr[N];
	
	printf("Enter the Array Elements\n");
	for(int i=0; i< N ;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("The Original Array");
	for(int i =0 ;i< N; i++){
		printf("%d",arr[i]);
		printf("\n");
	}
	
	
		printf("Enter the Position at which you want to Enter the new array element\n");
		scanf("%d",&pos);
		
		if(pos>N){
			printf("Array Index Out of Bound ");
		}
		
		else{
		printf("Enter the New Element \n");
		scanf("%d",&num);
		
		for(int i=N-1 ; i>=pos-1; i--){
			arr[i+1]=arr[i];
		}
		
		arr[pos-1]=num;
		N++;
		
		printf("The New Array is\n:");
		for(int i =0 ;i <N; i++){
			printf("%d",arr[i]);
		}
		}
	
	return 0;
}

