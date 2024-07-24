/*
twoSum.h
sidb95
bhatoresiddharth@gmail.com
12 July 2024
*/

class Solution {
public:
    pair <int, int>(vector <int>& nums, int n, int target) {
        pair <int, int> p1;
        bool FLAG = false;
        for (int i = 0; i < n - 1; i += 1) {
            for (int j = i + 1; j < n; j += 1) {
                if ((nums[i] + nums [j]) == target) {
                    p1.first = i;
                    p1.second = j;
                    FLAG = true;
                    break;
                }
            }
            if (FLAG) {
                break;
            }
        }
        return p1;
    }
};
