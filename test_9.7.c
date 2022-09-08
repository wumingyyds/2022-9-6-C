#include <stdio.h>//求奇数
int main()
{
	int a;
	int b;
	printf("请输入数字：",a);
	scanf("%d",&a);
	b=a%2;
	if(a<0||a>100)
	printf("数字不在范围");
	else 
	{
		if(b==1)
	{
		printf("数字为奇数：%d\n",a);
	} 
	else 
	{
		printf("数字为偶数：%d\n",a);
	} 
	}
	return 0;
}
//2022.9.7
