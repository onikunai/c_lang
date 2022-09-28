#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *file; // ファイルポインタ(読み込み用)
    int i, size;
    // 書き込むデータ
    char* rdata;
    // バイナリデータの書き込み
    file = fopen("./smaple67.bin", "rb");
    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1); // 異常終了
    }
    // ファイルの最後までシーク
    fseek(file, 0, SEEK_END);
    // ファイルの大きさを取得
    size = ftell(file);
    // メモリのサイズだけ、配列を動的に生成
    rdata = (char*)malloc(sizeof(char)*size);
    // 再るの最後までポインタを戻す
    fseek(file, 0, SEEK_SET); // ファイルの先頭に戻る
    fread(rdata, sizeof(char), size, file);
    fclose(file); // ファイルを閉じる
    for (i=0; i<size; i++) {
        printf("%x", rdata[i]);
    }
    free(rdata); // メモリ解放
}
