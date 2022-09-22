#include<stdio.h>

void main()
{
    char s1[4] = {'a', 'b', 'c', '\0'};
    char s2[] = "HelloWorld.";
    char s3[10]; // 最大10文字まで入る文字列

    printf("文字列を入力して下さい：");
    scanf("%s", s3); // %は付けない
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
}