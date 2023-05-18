#include <stdio.h>
#include <stdlib.h>

//Binary Search
int main() 
{
	int n,mid,lb=0,ub,i,j;
	int search;
	int temp;
	
	int *arr=(int*)malloc(n*sizeof(int));
	
	printf("\nEnter how many elements do you want in array:");
	scanf("%d",&n);
	
	printf("\nEnter %d elements in sorted mannar:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe Elements of an array are:");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	
	printf("\nEnter element that you want to search:");
	scanf("%d",&search);
	
	lb=0;
	ub=n-1;
	mid=(lb+ub)/2;
	
	while(lb<=ub)
	{
		if(arr[mid]==search)
		{
			printf("\nElement is found at %d location",mid+1);
			break;
		}
		else if(arr[mid] < search)
		{
			lb=mid+1;
			mid=(lb+ub)/2;
		}
		else if(arr[mid] > search)
		{
			ub=mid-1;
			mid=(lb+ub)/2;
		}
	}
	
	if(lb>ub)
	{
		printf("\nElement not found");
	}
	
	free(arr);
}



