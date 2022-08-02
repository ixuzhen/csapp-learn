#include <stdio.h>
#include "practise_3.c"

void page_73(){
    int x = -12340;
    printf("x>>0 = %d \n", x>>0);
    printf("x/1 = %d \n", x/1);
    printf("x>>0 = %d \n", div2_k(x,0));
    printf("\n");

    printf("x>>1 = %d \n", x>>1);
    printf("x/2 = %d \n", x/2);
    printf("x>>1 = %d \n", div2_k(x,1));
    printf("\n");

    
    printf("x>>4 = %d \n", x>>4);
    printf("x/16 = %d \n", x/16);
    printf("x>>4 = %d \n", div2_k(x,4));
    printf("\n");

    
    printf("x>>8 = %d \n", x>>8);
    printf("x/256 = %d \n", x/256);
    printf("x>>8 = %d \n", div2_k(x,8));
    printf("\n");

}

int div2_k(int x, int k){
    return (x<0 ? x+(1<<k)-1 : x) >> k;
}

// 练习题4.42的test
void page_74(){
    div16(16);
    div16(15);
    div16(32);
    div16(31);
    div16(-16);
    div16(-15);
    div16(-32);
    div16(-31);
}

int main(int argc, char const *argv[])
{
    page_74();
    return 0;
}
