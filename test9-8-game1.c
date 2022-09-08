#include<stdio.h>//猜猜1-10是哪个数字游戏
#include<time.h>
#include<stdlib.h>
void menu()
{
    printf("************************\n");
    printf("**  1.play   0.exit   **\n");
    printf("************************\n");
}

void game()
{
    int ret =0;
    int guess =0;
    ret=rand()%10+1;
printf("是%d\n",ret);
while (1)
{
    printf("请猜数字：");
    scanf("%d",&guess);
    if(guess>ret)
    {
     printf("猜大了\n"); printf("1是%d\n",ret);  
    }
    else if(guess<ret)
    {
        printf("猜小了\n");
        printf("2是%d\n",ret);
        printf("guess=%d ret=%d\n",guess,ret);
    }
    else
    {
        printf("恭喜你，猜对了\n");printf("3是%d\n",ret);
        break;
    }
}
}
int main()
{
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
       menu();
       printf("请选择：");
       scanf("%d",&input);
       switch (input)
       {
       case 1:
       game();
        break;
       case 0:
       printf("退出游戏\n");
       break;
       default:
       printf("选择错误\n");
        break;
       }
    } while (1);
    return 0;
}