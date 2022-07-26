#include "bytePointser.c"



int main(int argc, char const *argv[])
{
    // test_show_bytes(12345);

    // show_byte("12345",6);
    
    // const char *s = "abcdef";
    // show_byte((byte_pointer)s, strlen(s));
    
    // page37
    char a = 0x41;
    show_byte(&a,1);
    char b = ~a;
    show_byte(&b, 1);
    char a1 = 0x00;
    show_byte(&a1,1);
    char b1 = ~a1;
    show_byte(&b1, 1);
    char a2 = 0x69&0x55;
    show_byte(&a2,1);
    char a3 = 0x69|0x55;
    show_byte(&a3,1);




    return 0;
}