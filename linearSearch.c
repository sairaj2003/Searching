#include <stdio.h>
#include <stdlib.h>

//Linear Search:
 
int main() 
{
	int i,n,search;
	
	printf("\nHow many element do you want:");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(n*sizeof(int));
	
	printf("\nEnter %d elements in array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nYour elements are:");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	
	printf("\nEnter element that you want to search:");
	scanf("%d",&search);
	
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			printf("\n %d is found at %d location",search,i+1);
			break;
		}
	}
	
	if(i==n)
	{
		printf("\n%d is not found...",search);
	}
	return 0;
}
