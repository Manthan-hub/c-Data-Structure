#include<stdio.h>

int main()
{
	int a[6];
	int key;
	int i,j;
	int temp;

	printf("Enter any six elements to be sorted using insertion sort\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}

	for(j=1;j<6;j++)
	{
		key=a[j];
		i=j-1;
		while((i>=0)&&(a[i]>=key))
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
			i=i-1;
		}
		a[i+1]=key;
	}

	printf("elements after sorting using insertion sort are \n");
	for(i=0;i<6;i++)
	{
		printf("%d  \n",a[i]);
	}
	
	return 0;
}