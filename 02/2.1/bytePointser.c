#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_byte(byte_pointer start, size_t len){
    size_t i;
    for (i=0;  i < len; i++){
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x){
    show_byte((byte_pointer)&x, sizeof(int));
}
void show_float(float x){
    show_byte((byte_pointer)&x, sizeof(float));
}
void show_pointer(void *x){
    show_byte((byte_pointer)&x, sizeof(void*));
}


void test_show_bytes(int val){
    int ival = val;
    float fval = (float)ival;
    int *pval = &ival;
    printf("整数的16进制：");
    show_int(ival);
    printf("浮点数的16进制：");
    show_float(fval);
    printf("指针的16进制：");
    show_pointer(pval);
    printf("指针（地址）的值为：%p\n",pval);
}



