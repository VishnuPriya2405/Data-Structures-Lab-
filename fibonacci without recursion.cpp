#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of terms in the fibonacci series");
	scanf("%d",&n);
	int first=0,second=1,next;
	printf("fibonacci series:%d,%d",first,second);
	for(int i=2;i<n;i++)
	{
		next=first+second;
		printf("%d",next);
		first=second;
		second=next;
	}
	printf("\n");
	return 0;
}
