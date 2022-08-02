

int div16(int x){
    
    int bias = x >> 31 & 0xf;
    printf("%d %d\n",(x+bias)>>4,x/16);
    return (x+bias)>>4;
}