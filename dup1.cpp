#include<stdio.h>
int main()
{
	int i,j,a[100],n,f=0;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && i!=j)
			{
				f=1;
				printf("duplicate exist");
			}
			
			
		}
	}
	if(f==0)
	printf("does not exist");
	return 0;
}
