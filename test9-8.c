#include <stdio.h>//99乘法表
int main()
{
	int n;
	int b;
	int a=1;
	int c=1;
	printf("请输入数字：",n);
	scanf("%d",&n);
for(c=1;c<=n;c++) 
 {
  for(b=1;b<=c;b++)
  {
	a=c*b;
	printf("%d*%d=%d ",c,b,a);
  }
	printf(";\n");
 }
	return 0;
}
