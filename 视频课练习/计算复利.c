#include<stdio.h>
int main()
{int x;
printf("请输入最初存入定期钱数");
scanf("%d",&x);
double money;
money=x*(1+0.033)*(1+0.033)*(1+0.033);
printf("%f",money);
return 0;
}
