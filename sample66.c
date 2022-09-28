#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *file; // ファイルポインタ(読み込み用)
    int c; // 読み込む文字のコード
    file = fopen("./sample65.txt", "r"); // ファイルを読み込み用にオープン
    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1); // 異常終了
    }
    // ファイルにデータを読み込む
    while ((c = fgetc(file)) != EOF) { // int型で読み込んでいる。
        printf("%c", (char)c); // int→charにキャスト
    }
    fclose(file); // ファイルをクローズ
}
