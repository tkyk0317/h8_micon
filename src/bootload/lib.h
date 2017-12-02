#ifndef __LIB_H_INCLUDED_
#define __LIB_H_INCLUDED_

/* 一文字出力関数 */
int putc(unsigned char c);
/* 文字列出力関数 */
int puts(unsigned char* str);
/* メモリを特定のデータで埋める */
void* memset(void* b, int c, long len);
/* メモリコピー */
void* memcpy(void* dst, const void* src, long len);
/* メモリ比較 */
int memcmp(const void* b1, const void* b2, long len);
/* 文字列長取得 */
int strlen(const char* s);
/* 文字列コピー */
char* strcpy(char* dst, const char* src);
/* 文字列の比較 */
int strcmp(const char* s1, const char* s2);
int strncmp(const char* s1, const char* s2, int len);

/* 16進数出力関数 */
int putxval(unsigned long value, int column);

#endif

