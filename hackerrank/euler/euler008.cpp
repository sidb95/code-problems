/*
euler007
bhatoresiddharth@gmail.com
sidb95
21 May 2024
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long int calcAnswer(long long int n, long long int k, string num) {
    long long int retAnswer = 0;
    long long int posi = 0;
    bool FLAG = true;
    long long int productVar = 1;
    while (posi < n) {
        if (FLAG) {
            for (long long int i = posi; i < (posi + k); i++) {
                if (i > n) {
                    productVar = 0;
                    break;
                }
                retAnswer = max(productVar, retAnswer);
                productVar *= (num[i] - '0');
                if (productVar == 0) {
                    posi = i + 1;
                    productVar = 1;
                    FLAG = true;
                    continue;
                }
            }
            posi += k;
            FLAG = false;
        }
        else {
            if (posi < n) {
                productVar *= (num[posi] - '0');
                if (productVar == 0) {
                    FLAG = true;
                    continue;
                }
            }
            if (num[posi-k] != 0) {
                productVar /= (num[posi-k] - '0');
            }
            retAnswer = max(retAnswer, productVar);
            posi++;
        }
    }
    return retAnswer;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        long long int x = n;
        long long int y = k;
        cout << calcAnswer(x, y, num) << endl;
    }
    return 0;
}
