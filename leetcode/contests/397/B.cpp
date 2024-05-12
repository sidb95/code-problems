class Solution {
public:
    vector<int> retAns, TEMP;
    long long int maxFunc(int a, int b) {
        return (a > b) ? a : b;
    }
    
    void sumNegativeBeforeM(vector<int>& energy, int k, int N) {
        for (int j=N-1; j>=0; j--) {
            int sum = 0;
            if (TEMP[j] == true) {
                continue;
            }
            for (int i=j; i<N; i+=k) {
                sum += energy[i];
            }
            retAns.push_back(sum);
            if (sum < 0) {
                TEMP[j] = true;
            }
        }
        return;
    }
    int maximumEnergy(vector<int>& energy, int k) {
        int maxSum = INT_MIN;
        int N = energy.size();
        vector<int> sum;
        for (int i=0; i<N; i++) {
            TEMP.push_back(false);
        }
        sumNegativeBeforeM(energy, k, N, TEMP);
        int M = retAns.size();
        for (int i=0; i<M; i++) {
            maxSum = maxFunc(maxSum, retAns[i]);
        }
        return maxSum;
    }
};