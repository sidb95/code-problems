/*
839653
bhatoresiddharth@gmail.com
sidb95
18 May 2024
*/

class twoSumPairs::Solution {
public:
    vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n) {
	vector<pair<int, int>> retAnswer1 = {make_pair(-1, -1)};
    vector<pair<int, int>> retAnswer2;
    vector<int> visIndices;
    bool FLAG = true;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if ((arr[i] + arr[j]) == target) {
                if (FLAG) {
                    FLAG = false;
                    retAnswer1.clear();
                }
                retAnswer1.push_back(make_pair(arr[i], arr[j]));
            }
        }
    }
    for (int i = 0; i < retAnswer1.size()-1; i++) {
        for (int j=i+1; j<retAnswer1.size(); j++) {
            if (retAnswer1[i].first == retAnswer1[j].first) {
                if (retAnswer1[i].second == retAnswer1[j].second) {
                    continue;
                }
                retAnswer2.push_back(retAnswer1[i]);
            }
        }
        return retAnswer2;
    }
};