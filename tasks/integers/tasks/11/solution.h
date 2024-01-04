#pragma once

#include <math.h>
#include <stdint.h>
#include <stdio.h>

int32_t Len(int64_t num) {
    int32_t counter = 0;
    while (num > 0) {
        num /= 10;
        counter += 1;
    }
    return counter;
}

int Task() {
    // write your solution here
    return 0;
}
int main() {
    int64_t num = 56243;
    int32_t a = Len(num);
    num = (pow(10, (a - 1)) * (num % 10)) + (num / 10);
    printf("%ld", num);
}
