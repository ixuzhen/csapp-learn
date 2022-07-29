#include "../2.1/bytePointser.c"
#include "../utils.c"
#include "swap.c"
#include "practice2.c"

void page56(){
    short sx = -12345;
    unsigned uy = sx;
    unsigned uy1 = (unsigned short)sx;

    printf("uy = %u:\t", uy);
    show_byte((byte_pointer)&uy, sizeof(unsigned));
    printf("uy = %u:\t", uy1);
    show_byte((byte_pointer)&uy1, sizeof(unsigned));
}

void page56_2(){
    int x = 53191;
    short sx = (short)x;
    show_byte((byte_pointer)&x, sizeof(int));
    show_byte((byte_pointer)&sx, sizeof(short));
}

void page63_test(){
    unsigned x = 0-1;
    unsigned y = 0-1;
    unsigned res1 = uadd_ok(x,y);
    unsigned res2 = uadd_ok(1,2);
    printf("%u + %u = %u\n",x,y,res1);
    printf("%u, %u\n", res1, res2);
}

void page65_test_31(){
    int x1 = __INT_MAX__;
    int y1 = __INT_MAX__;
    int res1 = tadd_ok(x1, y1);
    printf("%d\n",res1);
    int x2 = -__INT_MAX__;
    int y2 = -__INT_MAX__;
    int res2 = tadd_ok(x2, y2);
    printf("%d\n",res2);
    int x3 = 1;
    int y3 = 2;
    int res3 = tadd_ok(x3, y3);
    printf("%d\n",res3);

}

void page69_test_36(){
    int x1 = __INT_MAX__;
    int y1 = __INT_MAX__;
    int res1 = tmult_ok_int64(x1, y1);
    printf("%d\n",res1);
    int x2 = -__INT_MAX__;
    int y2 = -__INT_MAX__;
    int res2 = tmult_ok_int64(x2, y2);
    printf("%d\n",res2);
    int x3 = 1;
    int y3 = 2;
    int res3 = tmult_ok_int64(x3, y3);
    printf("%d\n",res3);
}

int main(int argc, char const *argv[])
{
    page69_test_36();
    // page65_test_31();
    // page63_test();
    // page56_2();

    // int a = 1;
    // int b = 2;
    // inplace_swap(&a, &b);
    // printf("%d %d\n",a,b);
    // printf("%d", 10^10);
    
    // int a[4] = {1,2,3,4};
    // reverse_array(a,4);
    // printIntArray(a,4);

    // int b[5] = {1,2,3,4,5};
    // reverse_array(b,5);
    // printIntArray(b,5);

    // // 练习题2.12
    // int x = 0x87654321;
    // printf("0x%.8x\n",x);
    // printf("0x%.8x\n", x&0xff);
    // printf("0x%.8x\n",x^~0xff);
    // printf("0x%.8x\n",x|0xff);



    
    return 0;
}
