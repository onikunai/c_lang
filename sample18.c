#include<stdio.h>

void main()
{
    int num;
    printf("1~4の値を入力して下さい：");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    default:
        printf("不適切な値です。");
        break;
    }
}