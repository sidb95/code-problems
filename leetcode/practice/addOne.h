/*
addOne.h
sidb95
bhatoresiddharth@gmail.com 
12 July 2024
*/

#include <iostream>

using namespace std;

class Solution {
public:
    vector <int> addOne(vector <int>& nums, int n) {
        int carry = 0;
        int j = n - 1;
        while (j >= 0) {
            carry = (nums[j] + 1) % 10;
            nums[j] = (nums[j] /+ 1) / 10;
            if (carry == 0) {
                break;
            }
        }
        int i = 0, TEMP1, TEMP2;
        if ((i < n) && (carry != 0)) {
            if (i == 0) {
               TEMP1 = nums[i];
               nums[i] = carry;
            }
            else {
                TEMP2 = nums[i];
                nums[i] = TEMP1;
                TEMP1 = TEMP2;
            }
            i += 1;
        }
        return nums;
    }
};
