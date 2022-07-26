#include "../2.1/bytePointser.c"
#include "../utils.c"
#include "swap.c"

int main(int argc, char const *argv[])
{
    // int a = 1;
    // int b = 2;
    // inplace_swap(&a, &b);
    // printf("%d %d\n",a,b);
    // printf("%d", 10^10);
    
    int a[4] = {1,2,3,4};
    reverse_array(a,4);
    printIntArray(a,4);

    int b[5] = {1,2,3,4,5};
    reverse_array(b,5);
    printIntArray(b,5);

    // 练习题2.12
    int x = 0x87654321;
    printf("0x%.8x\n",x);
    printf("0x%.8x\n", x&0xff);
    printf("0x%.8x\n",x^~0xff);
    printf("0x%.8x\n",x|0xff);



    
    return 0;
}
