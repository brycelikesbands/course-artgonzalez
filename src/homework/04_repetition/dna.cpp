//add include statements
#include "dna.h"
//add function(s) code here
int factorial(int num) {
    int product = 1;
    while (num > 0) {
        product *= num;
        num--;
    }
    return product;
}

int gcd(int num1, int num2) {
    while (num1 != num2) {
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        num1 -= num2;
    }
    return num1;
}