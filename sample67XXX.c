#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *file; // ファイルポインタ(読み込み用)
    int i;
    // 書き込むデータ
    char wdata[] = { 0x10, 0x1a, 0x1e, 0x1f };
    char rdata[4];
    // バイナリデータの書き込み
    file = fopen("./sample67.bin", "wb");
    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1); // 異常終了
    }
    fwrite(wdata, sizeof(char), sizeof(wdata), file);
    fclose(file); // ファイルをクローズ

    // バイナリデータの読み込み
    file = fopen("./sample67.bin", "wr");
    if (file == NULL) {
        printf("ファイルが開けません。\n");
        exit(1); // 異常終了
    }
    fwrite(rdata, sizeof(char), sizeof(rdata), file);
    fclose(file); // ファイルをクローズ
    for (i=0; i<sizeof(rdata); i++) 
    {
        printf("%x", rdata[i]);
    }
}
