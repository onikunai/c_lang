#include<stdio.h>
#include<string.h>

// 学生のデータを入れる構造体
struct student
{
    int id; // 学生番号
    char name[256]; // 名前
    int age; // 年齢
};

void main()
{
    struct student data;
    data.id = 1;
    strcpy(data.name, "山田太郎");
    data.age = 18;
    printf("学生番号：%d 名前：%s 年齢：%d\n", data.id, data.name, data.age);
}

