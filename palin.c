#include<stdio.h>
int isPalindrome(long x)
{
	int r;
	long rev,t;
	t=x;
	rev=0;
	while(x!=0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	if(t==rev)
	return 1;
	else 
	return 0;
}
int main()
{
	int i,j,r1,r2;
	long s,max;
	scanf("%d%d",&r1,&r2);
	if(r1<100||r2>999)
{
	printf("invalid range");
	return 0;
}
max=r1*r1;
for(i=r1;i<=r2;i++)
{
	for(j=r1;j<=r2;j++)
	{
		s=i*j;
		if(s>max&&isPalindrome(s))
		{
			max=s;
			printf("%d*%d=%d\n",i,j,max);
			
		}
	}
}
printf("%d",max);
}
