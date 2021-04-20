#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20];
flag:
	system("shutdown -s -t 60");
	printf("请输入：我是猪，不然不关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("这不就好了，早知乖点就是了~ ~\n");
	}
	else
	{
		printf("不输入就关机\n");
		goto flag;
	}
	getchar();
	return 0;
}

