#include <stdio.h> 
int main()
{
	int n,i;
	int a,b,c,d; 
	printf("请输入想要运算的数值范围！\n");
	scanf("%d",&n);
	int t=0;
	if(n/1000!=0)
	{
		printf("%-5d",9);
		for(i=10;i<=99;i++)
		{
			a=i/1000;
			b=i/100%10;
			c=i/10%10;
			d=i%10;
			if(c+d==9)
			{
			printf("%-5d",i);
			t++;
			}
		}
		for(i=100;i<=999;i++)
		{
			a=i/1000;
			b=i/100%10;
			c=i/10%10;
			d=i%10;
			if(b+c+d==9)
			{
			printf("%-5d",i);
			t++;
			}
		}	
		for(i=1000;i<=n;i++)
		{
			a=i/1000;
			b=i/100%10;
			c=i/10%10;
			d=i%10;
			if(a+b+c+d==9)
			{
				t++;
				printf("%-5d",i);
			}
		}
	}
	else if(n/100!=0)
	{
		printf("%-5d",9);
		for(i=10;i<=99;i++)
		{
			a=i/1000;
			b=i/100%10;
			c=i/10%10;
			d=i%10;
			if(c+d==9)
			{
			printf("%-5d",i);
			t++;
			}
		}	
		for(i=100;i<=n;i++)
		{
			a=i/1000;
			b=i/100%10;
			c=i/10%10;
			d=i%10;
			if(b+c+d==9)
			{
				printf("%-5d",i);
				t++;
			}
		}
	}
	else if(n/10!=0) 
	{
		printf("%-5d",9);
		for(i=10;i<=n;i++)
		{
			a=i/1000;
			b=i/100%10;
			c=i/10%10;
			d=i%10;
			if(c+d==9)
			{
				t++;
				printf("%-5d",i);
			}
		}
	}
	else
	printf("9");
	printf("\n");
	printf("总共有%d个!",t+1);
	return 0;
}
