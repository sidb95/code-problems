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
        int maxSum = INT_MIN;
        vector<int> sum;
        for (int l=0; l<k; l++) {
            sum.push_back(energy[l]);
        }
        for (int j=k; j<n; j++) {
            sum.push_back(maxFunc(energy[j], sum[j-k] + energy[j]));
        }
        for (int i=n-1; i>n-1-k; i--) {
            maxSum = maxFunc(maxSum, sum[i]);
        }
        return maxSum;
    }
};