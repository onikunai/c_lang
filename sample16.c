#include<stdio.h>

void main()
{
    int num;
    printf("1~4の値を入力して下さい:");
    // キーボードから整数を入力
    scanf("%d", &num);
    // 入力した値が、正の数かどうかを調べる
    if (num == 1){
        printf("one\n");
    }
    else if (num == 2) {
        printf("two\n");
    }
    else if (num == 3) {
        printf("three\n");
    }
    else if (num == 4) {
        printf("four\n");
    }
    else {
        printf("不適切な値です。\n");
    }
}