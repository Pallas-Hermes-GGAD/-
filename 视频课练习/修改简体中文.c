#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 936 > nul"); //强制切GBK简体，>nul屏蔽提示文字
    printf("测试简体中文输出\n");
    return 0;
}