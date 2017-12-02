#include "defines.h"
#include "serial.h"
#include "lib.h"

int global_data = 0x10;
int global_bss;
static int static_data = 0x20;
static int static_bss;

static void printval(void) {
    puts("global_data = "); putxval(global_data, 0); puts("\n");
    puts("global_bss = "); putxval(global_bss, 0); puts("\n");
    puts("static_data = "); putxval(static_data, 0); puts("\n");
    puts("static_bss = "); putxval(static_bss, 0); puts("\n");
}

/**
 * メモリの初期化など、各種初期化処理を実施.
 */
static int init(void) {
    /* 隣家スクリプトで定義しているシンボル */
    extern int erodata, data_start, edata, bss_start, ebss;

    /* 各領域を初期化 */
    memcpy(&data_start, &erodata, (long)&edata - (long)&data_start);
    memset(&bss_start, 0x0, (long)&ebss - (long)&bss_start);

    /* シリアル通信初期化 */
    serial_init(SERIAL_DEFAULT_DEVICE);
}

/**
 * メイン関数.
 */
int main(void) {
    init();
    puts((unsigned char*)"Start Bootloader\n");

    printval();
    puts("overwrite variables. \n");
    global_data = 0x20;
    global_bss = 0x30;
    static_data = 0x40;
    static_bss = 0x50;
    printval();

    while(1);
    return 0;
}
