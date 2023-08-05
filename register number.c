#include<stdio.h>
int main()
{
	int a[100];
	int i,j;
	int n,b,count=0;
	printf("enter the no of array element :");
	scanf("%d",&n);
	printf("Enter %d reg no :",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the reg to find :");
	scanf("%d",&b);
	for(i=1;i<=n;i++)
	{
		if(a[i]==b)
		{
			count=i;
		}
	
	}
	if(count!=0)
	{
		printf("Register number found in index %d",count);
	}
else{
	printf("Register number is not found ");
}
}

