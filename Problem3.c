/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/
#include <stdio.h>

int main(){
    int i = 2;
    long long number = 600851475143;
    while (number > i) {
        if (number % i == 0) {
            number = number / i;
            printf("%lld\n", number);
        }else{
            if (i == 2) {
                i++;
            }else{
                i += 2;
            }
        }
    }
    printf("%d\n", i);
}
