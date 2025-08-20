#include <stdio.h>

int main(){
    int n = 12;

    if (n%3 == 0){
        printf("Number %d is divisible by 3", n);
    }else{
        printf("Number %d is not divisible by 3", n);
    }

    return 0;
}