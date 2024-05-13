/*
B
bhatoresiddharth@gmail.com 
sidb95
12,13 May 2024
*/
class Solution {
public:
    long long int maxFunc(int a, int b) {
        return (a > b) ? a : b;
    }
    
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        int sum[n], maxSum = INT_MIN;
        for (int i=0; i<n; i++) {
            if (i-k < 0) {
                sum[i] = energy[i];
                continue;
            }
            for (int j=i; j<n; j++) {
                if ((sum[j-k] + energy[j]) > sum[j-k]) {
                    sum[j] = sum[j-k] + energy[j];
                }
            }
        }
        for (int i=0; i<n; i++) {
            maxSum = maxFunc(maxSum, sum[i]);
        }
        return maxSum;
    }
};