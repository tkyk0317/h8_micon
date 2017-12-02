#include "defines.h"
#include "serial.h"
#include "lib.h"

/* 一文字送信 */
int putc(unsigned char c) {
    if (c == '\n') {
        serial_send_byte(SERIAL_DEFAULT_DEVICE, '\r');
    }
    return serial_send_byte(SERIAL_DEFAULT_DEVICE, c);
}

/* 文字列送信 */
int puts(unsigned char* str) {
    while(*str) {
        putc(*(str++));
    }
    return 0;
}

/* メモリーセット */
void* memset(void* b, int c, long len) {
    char* p = NULL;
    for (p = b ; len > 0 ; len--) {
        *(p++) = c;
    }
    return b;
}

/* メモリーコピー */
void* memcpy(void* dst, const void* src, long len) {
    char* d = dst;
    const char* s = src;
    for(; len > 0 ; len--) {
        *(d++) = *(s++);
    }
    return dst;
}

/* メモリー比較 */
int memcmp(const void* d1, const void* d2, long len) {
    const char* p1 = d1, *p2 = d2;
    for(; len > 0 ; len--) {
        if(*p1 != *p2) return *p1 > *p2 ? 1 : -1;
        p1++; p2++;
    }
    return 0;
}

/* 文字列長取得 */
int strlen(const char* s) {
    int len;
    for(len = 0 ; *s ; len++, s++);
    return len;
}

/* 文字列コピー */
char* strcpy(char* dst, const char* src) {
    char* d = dst;
    for(;; dst++, src++) {

        *dst = *src;
        if(!*src) break;
    }
    return d;
}

/* 文字列比較 */
int strcmp(const char* s1, const char* s2) {
    while(*s1 || *s2) {
        if(*s1 != *s2) return *s1 > *s2 ? 1 : -1;
        s1++; s2++;
    }
    return 0;
}
int strncmp(const char* s1, const char* s2, int len) {
    while((*s1 || *s2) && len > 0) {
        if(*s1 != *s2) return *s1 > *s2 ? 1 : -1;
        s1++; s2++; len--;
    }
    return 0;
}

/* 16進数出力 */
int putxval(unsigned long value, int column) {
    char buf[9];
    char* p;

    p = buf + sizeof(buf) - 1;
    *(p--) = '\0';

    if(!value && !column) column++;

    while(value || column) {
        *(p--) = "0123456789abcdef"[value & 0xf];
        value >>= 4;
        if(column) column--;
    }
    puts(p + 1);
    return 0;
}
