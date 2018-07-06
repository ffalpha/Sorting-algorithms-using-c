#include<stdio.h>
int main(){
	int i,j,temp,z,min;
	int arr[12]={25,12,8,9,0,2,35,24,4,11,16,15};
	printf("UnSorted array\n");
	for(i=0;i<12;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0;i<12;i++){
	        for(j=i+1,min=i;j<=12;j++){
	        	if(arr[j]<arr[min]){
	        		min=j;		
				}
			}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		printf("%d Round sorting\n",i);
		for(z=0;z<12;z++)
		{
			printf("%d\t",arr[z]);
		}
	printf("\n");
	}
		
}
