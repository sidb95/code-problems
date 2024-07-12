/*
twoSum1.h
sidb95
bhatoresiddharth@gmail.com 
12 July 2024
*/

class Solution {
public:
    pair <int, int> twoSum(vector <int>& nums, int n, int target) {
        pair <int, int> p1;
        unordered_map <int, int> M1;
        for (int i = 0; i < n; i += 1) {
            M1[nums[i]] = i;
        }
        for (int i = 0; i < n; i += 1) {
            int TEMP = target - nums[i];
            p1.first = i;
            unordered_map <int, int> itr;
            itr = M1.find(TEMP);
            if (itr != M1.end()) {
                p1.second = (*itr);
                break;
            }
        }
        return p1;    
    }
};
