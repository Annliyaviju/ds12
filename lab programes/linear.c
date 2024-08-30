//Annliya Viju
//Roll no:12
#include<stdio.h>
void main()
{
	int a[50],search,i,found=0,num;
	printf("Enter the number of elements:");
	scanf("%d",&num);
	printf("The elements of array:");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched");
	scanf("%d",&search);
	for(i=0;i<num;i++)
	{
		if(a[i]==search)
		{
			found=1;
			break;
		}
	}
	if (found)
	{
	 	printf("The element was found at position%d\n",i+1);
	 }
	 else
	 {
	 	printf("The element was not found\n");
	 }
}	 
	 					

