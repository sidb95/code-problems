/*
euler009
bhatoresiddharth@gmail.com
sidb95
21 May 2024
*/


#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    set <long long int> VIS;

public:
    long long int n1;
    Solution(long long int N1) {
        n1 = N1;
        for (long long int i = 1; i < N1 - 1; i++) {
            VIS.insert(i);
        }
    }

    long long int calcAnswer() {
        set <long long int>::iterator itrVIS;
        long long retAnswer = -1;
        long long productVar = 1;
        for (long long int i = 1; i < (n1 - 2); i++) {
            long long int sum = i;
            for (long long int j = i + 1; j < (n1 - 1); j++) {
                sum += j;
                itrVis = VIS.find(n1 - sum);
                if (itrVIS != VIS.end()) {
                    long long int k = (*itrVIS);
                    if ((i != j) && (j != k) && (k != i)) {
                        productVar = (i) * (j) * (k);
                        retAnswer = max(retAnswer, productVar);
                    }
                }
            }
        }
        return retAnswer;
    }
};

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int x = n;
        Solution mySol = new Solution(x);
        cout << mySol.calcAnswer() << endl;
    }
    return 0;
}
