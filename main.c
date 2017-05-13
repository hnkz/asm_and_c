#include <stdio.h>

extern int _add_one(int port); // extern 宣言でアセンブラ内の関数を読み込む

int
main () {
    unsigned int res;

    res = _add_one(0xffffffff);

    printf("0x%x\n", res);

    return 0;
}
