#include <stdio.h>

// 交换变量
void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
    int first, last;
    for(first=0, last=cnt-1; first<last; first++, last--){
        inplace_swap(&a[first], &a[last]);
    }
}

int bis(int x, int m){

}

int bic(int x, int m){
    
}


