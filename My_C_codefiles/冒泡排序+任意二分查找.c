#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//ð������+���ֲ��ң�
	int arr[10]	,i,j;
	printf("������ʮ������\n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("\n");
	printf("�����ʮ�����ֱ�Ϊ��\n");
	for(j=0;j<10;j++)
	printf("%-4d",arr[j]);
	//��ʼð������
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
	//��С���������
	printf("����������˳��Ϊ��\n");
	int a=1;
	for(i=0;i<=9;i++,a++)
	{
		printf("%-4d",arr[i]);
		if(a%5==0)
		printf("\n");
	}
	//��ʼ���ֲ���
again: 
	{
		int x;
	printf("��������Ҫ���ҵ�����\n");
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
	printf("����������ڱ�����ĵ�%d����",mid+1);
	else
	{
		printf("������������ڱ������У���Ҫ����������?\n");
		//���������������롣 
		printf("������yes �� no��\n");
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
