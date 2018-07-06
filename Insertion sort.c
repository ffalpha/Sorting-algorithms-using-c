#include<stdio.h>
int main(){
	int i,j,temp,z;
	int arr[12]={25,12,8,9,0,2,35,24,4,11,16,15};
	printf("UnSorted array\n");
	for(i=0;i<12;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=1;i<12;i++){
		temp=arr[i];
		for(j=i;j>0 && arr[j-1]>temp;--j){
			arr[j]=arr[j-1];
				
		}
		arr[j]=temp;
		printf("%d Round sorting\n",i);
			for(z=0;z<12;z++){
				
		printf("%d\t",arr[z]);
	}

	printf("\n\n");
      }
}
