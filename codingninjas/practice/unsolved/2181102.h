/*
2181102
bhatoresiddharth@gmail.com
sidb95
19 May 2024
*/
#include <math.h>

long reverseBits(long n) {
    long m = 0;
    m = n;
    int count = 0;
    while (m != 0) {
        m /= 2;
        count++;
    }
    long retAnswer = 0;
    for (int i = n; count >= 0; i /= 2) {
        retAnswer += (i % 2) * pow(2, count-1);
        count--;
    }
    return retAnswer;
}
