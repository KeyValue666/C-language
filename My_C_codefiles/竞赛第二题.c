#include <stdio.h>
int main()
{
	int a,b,c;
	printf("������б��c��ֵ��\n");
	scanf("%d",&c);
	for(b=1;b<c;b++) 
	{
		for(a=1;a<=b;a++)
		{
			if(a*a+b*b==c*c)
			printf("%d   %d\n",a,b);
		}
	}
	return 0;
}
