#include<stdio.h>

void main()
{
    int dice;
    // サイコロの目を入力
    printf("1~6の値を入力して下さい:");
    // キーボードから整数を入力
    scanf("%d", &dice);
    // 値が、サイコロの目の範囲内かどうかを調べる
    if (1 <= dice && dice <= 6) {
        // サイコロの目が、偶数か、奇数かで、処理を分ける。
        if (dice == 2 || dice == 4 || dice == 6) {
            printf("丁（チョウ）です。\n");
        }
        else {
            printf("半（ハン）です。\n");
        }
    }
    else {
        printf("範囲外の数値です。\n");
    }
}