/*
A.cpp
sbhatore95 
sbhatore95@gmail.com
16 July 2024
*/

#include <iostream>

using namespace std;

int myFunc(int a, int b, int c, int p, int q, int r) {
    return ((a + p) * (b + q) * (c + r));
}


int main() {
    int a, b, c; 
    int T; 
    cin >> T;
    for (int t = 0; t < T; t += 1) 
        cin >> a >> b >> c
        bool  FLAG = true;
        int maxVal = INT_MIN;
        for (int p = 0; p <= 5; p += 1) {
            for (int r = 0; r <= 5; r += 1) {
                for (int q = 0; q <= 5; q += 1) {
                    if ((p + q + r) == 5) {
                         maxVal = max(maxVal, myFunc(a, b, c, p, q, r);
                     }
                 }
             }
        }
        return maxVal;
    }
    
}
