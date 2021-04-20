#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//冒泡排序+二分查找；
	int arr[10]	,i,j;
	printf("请输入十个数：\n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("\n");
	printf("输入的十个数分别为：\n");
	for(j=0;j<10;j++)
	printf("%-4d",arr[j]);
	//开始冒泡排序
	int t;
	for(i=0;i<9;i++) 
	{
		for(j=0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	//从小到大排序后
	printf("排序后的数组顺序为：\n");
	int a=1;
	for(i=0;i<=9;i++,a++)
	{
		printf("%-4d",arr[i]);
		if(a%5==0)
		printf("\n");
	}
	//开始二分查找
again: 
	{
		int x;
	printf("请输入你要查找的数！\n");
	scanf("%d",&x);
	int low=0,high=9,mid;
	int flag=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==x)
		{
			flag=1;
			break;
		}
		else if(x>arr[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(flag==1)
	printf("你输入的数在本数组的第%d个！",mid+1);
	else
	{
		printf("你输入的数不在本数组中，需要重新输入吗?\n");
		//数据输错可重新输入。 
		printf("请输入yes 或 no！\n");
		char bb[100] ;
	    scanf("%s",bb);
		if(strcmp(bb,"yes")==0)
		goto again;
		else
		getchar();
	}
}
	return 0 ;
}
