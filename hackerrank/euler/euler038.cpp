/*
euler038
bhatoresiddharth@gmail.com
sidb95
07 June 2024
*/

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

string S = "12345678";
string R = "123456789";

bool checkPan(string str, int k) {
    bool retPropn = false;
    if (k == 8) {
        if (str == S) {
            retPropn = true;
        }
    }
    else {
        if (str == R) {
            retPropn = true;
        }
    }
    return retPropn;
}

bool calcAnswerAux(long long int n, int k) {
    bool retPropn = false;
    string str = "";
    str = to_string(n * 1) + to_string(n * 2);
    //
    for (int i = 3; i <= 7; i += 1) {
        string TEMP = str;
        sort(str.begin(), str.end());
        //
        if(checkPan(str, k)) {
            retPropn = true;
            break;
        }
        //
        str = TEMP;
        str += to_string(n * (i));
    }
    //
    if (checkPan(str, k)) {
        retPropn = true;
    }
    //
    return retPropn;
}

vector <long long int> calcAnswer(long long int N, long long int K) {
    vector <long long int> V1;
    for (int i = 2; i < N; i += 1) {
        if (calcAnswerAux(i, K)) {
            V1.push_back(i);
        }
    }
    return V1;
    
}

int main() {
    long long int N, K;
    cin >> N >> K;
    vector <long long int> V1;
    V1 = calcAnswer(N, K);
    int n = V1.size();
    for (int i = 0; i < n; i += 1) {
        cout << V1[i] << endl;
    }    
    return 0;
}
