//Annliya Viju
//Roll no:12
#include<stdio.h>
void main()
{
	int a[50],i,j,temp,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1-i;j++)
	{ 
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
	printf("The sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}					
