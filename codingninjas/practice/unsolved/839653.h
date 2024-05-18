/*
839653
bhatoresiddharth@gmail.com
sidb95
18 May 2024
*/

class twoSumPairs::Solution {
public:
    vector<pair<int, int>> twoSum(vector<int>& arr, int target, int n) {
        vector<pair<int, int>> retAnswer;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                if (arr[i] + arr[j] == target) {
                    retAnswer.push_back(make_pair(arr[i], arr[j]));
                }
            }
        }
        return retAnswer;
    }
};