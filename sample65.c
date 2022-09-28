#include<stdio.h>
#include<stdlib.h>

#define SIZE 256 // 1行の文字数

void main()
{
    FILE *file; // ファイルポインタ(読み込み用)
    char line[SIZE]; // 読み込み行
    line[0] = '\0'; // 初期化(空文字列)
    file = fopen("./sample65.txt", "r"); // ファイルを読み込み用にオープン
    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1); // 異常終了
    }
    // ファイルにデータを読み込む
    while (fgets(line, SIZE, file) != NULL) {
        printf("%s", line);
    }
    fclose(file); // ファイルをクローズ
}
