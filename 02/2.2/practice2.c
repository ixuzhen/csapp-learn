#include <stdint.h>
// 练习2.27，判断无符号加法是否会溢出，不溢出就返回1
int uadd_ok(unsigned x, unsigned y){
    unsigned res = x + y;
    return res >= x;
}

// 练习2.30，判断有符号加法是否会溢出，不溢出就返回1
int tadd_ok(int x, int y){
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x >=0 && y >=0 && sum < 0;
    return !neg_over && !pos_over;
}

// 练习2.35 判断乘法是否会溢出，不溢出就返回1
int tmult_ok(int x, int y) {
    int p = x*y;
    // I* Either xis zero, or dividing p by x gives y *I
    return !x || p/x == y;
}

// 练习2.36 使用64位int64_t，来判断乘法是否溢出
int tmult_ok_int64(int x, int y) {
    int64_t mul = (int64_t)x*y;
    return mul == (int)mul;
}
