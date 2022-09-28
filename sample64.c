#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *file; // ファイルポインタ(出力用)
    file = fopen("./sample64.txt", "w"); // ファイルを書き込み用にオープン
    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1); // 異常終了
    }
    // ファイルにデータを書き込む
    fprintf(file, "Hello World.\r\n"); // ファイルに書く
    fprintf(file, "ABCDEF\r\n");
    fprintf(file, "アイウエオ\r\n");
    fclose(file); // ファイルをクローズ
}
