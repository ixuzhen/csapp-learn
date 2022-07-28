#include "../2.1/bytePointser.c"
#include "../utils.c"
#include "swap.c"

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


int main(int argc, char const *argv[])
{
    page56_2();

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
