/*
A
bhatoresiddharth@gmail.com
397
Siddharth  Bhatore
12 May 2024
*/

#include <iostream>
#include <string>
#include <math>

using namespace std;

class Solution {
    long long int permutationDifference(string s, string t) {
        int retAns = 0;
        int count = s.size();
        for (int i=0; i<count; i++) {
            for (int j=0; j<count; j++) {
                if (s[i] == t[j]) {
                    retAns += fabs(i-j);
                }
            }
        }
        return retAns;
    }
};