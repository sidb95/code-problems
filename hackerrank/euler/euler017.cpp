/*
euler017
bhatoresiddharth@gmail.com
sidb95
25, 28 May 2024
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    // string sets needed
    vector <string> words1 = {
        "Trillion", "Billion", "Million", "Thousand", "Hundred"
    };
    vector <string> words2 = {
        "Ninety", "Eighty", "Seventy", "Sixty", "Fifty", "Forty",
        "Thirty", "Twenty", "Ten"
    };
    vector<string> words3 = {
        "Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One", 
        "Zero"
    };
    vector<string> words4 = {
        "Nineteen", "Eighteen", "Seventeen", "Sixteen", "Fifteen", "Fourteen",
        "Thirteen", "Twelve", "Eleven"    
    }; 
    //
    void calcAnswerIA(string& answer, int n) {
        if (n > 0) {
            if (answer[n - 1] != ' ') {
                answer += " ";
            }
        }
    }
    // adding the units digit place
    void calcAnswerAux1(string& answer, vector<int>& digits, bool FLAG = true) {
        if (FLAG && (digits[0] == 0)) {
            // pass
        }
        else {
            answer += words3[9 - digits[0]];
        }
        return;
    }
    
    //
    void calcAnswerAux2(string& answer, vector<int>& digits, 
    bool FLAG = true) {
        if (FLAG && (digits[1] == 0)) {
            // pass
        }
        else {
            int count = answer.size();
            calcAnswerIA(answer, count);
            if (digits[0] == 0) {
                answer += words2[8];
            }
            else {
                if (digits[1] == 1) {
                    answer += words4[9 - digits[0]];
                }
                else {
                    answer += words2[9 - digits[1]];
                    calcAnswerAux1(answer, digits, false);
                }
            }
        }
        return;                                      
    }
    
    //
    void calcAnswerAux3(string& answer, vector<int>& digits, 
    bool FLAG = true) {
        if (FLAG && (digits[2] == 0)) {
            // pass
        }
        else {
            int count = answer.size();
            calcAnswerIA(answer, count);
            answer += words3[9 - digits[2]];
            answer += " ";
            answer += words1[4];
            calcAnswerAux2(answer, digits, false);
        }
        return;
    }
    //
    void calcAnswerAux4(string& answer, vector<int>& digits) {
        if (digits[3] == 0) {
            calcAnswerAux3(answer, digits);
        }
        else {
            int n = answer.size();
            calcAnswerIA(answer, n);
            answer += words3[9 - digits[3]];
            answer += " ";
            answer += words1[3];
            calcAnswerAux3(answer, digits);
        }
        return;
    }
    
    void calcAnswerAux5(string& answer, vector<int>& digits) {
        if (digits[4] == 0) {
            calcAnswerAux4(answer, digits);
        }
        else {
            int n = answer.size();
            calcAnswerIA(answer, n);
            if (digits[3] == 0) {
                if (digits[4] == 1) {
                    answer += words2[8];    
                }
                else {
                    answer += words2[9 - digits[4]];
                }
            }
            else {
                if (digits[4] == 1) {
                    answer += words4[9 - digits[3]];
                }
                else {
                    answer += words2[9 - digits[4]];
                    answer += " ";
                    answer += words3[9 - digits[3]];
                }
            }
            //
            n = answer.size();
            calcAnswerIA(answer, n);
            answer += words1[3];
            //
            calcAnswerAux3(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux6(string& answer, vector<int>& digits) {
        if (digits[5] == 0) {
            calcAnswerAux5(answer, digits);
        }
        else {
            int count = answer.size();
            calcAnswerIA(answer, count);
            answer += words3[9 - digits[5]];
            answer += " ";
            calcAnswerAux2(answer, digits, false);
            answer += " ";
            answer += words1[3];
            calcAnswerAux3(answer, digits, false);   
        }
        return;
    }
    //
    void calcAnswerAux7(string& answer, vector<int>& digits) {
        if (digits[6] == 0) {
            calcAnswerAux6(answer, digits);
        }
        else {
            int n = answer.size();
            calcAnswerIA(answer, n);
            answer += words3[9 - digits[6]];
            answer += " ";
            answer += words1[2];
            answer += " ";
            calcAnswerAux6(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux8(string& answer, vector<int>& digits) {
        if (digits[7] == 0) {
            calcAnswerAux7(answer, digits);
        }
        else {
            int n = answer.size();
            calcAnswerIA(answer, n);
            answer += words3[9 - digits[7]];
            answer += " ";
            answer += words1[4];
            answer += " ";
            calcAnswerAux2(answer, digits);
            n = answer.size();
            calcAnswerIA(answer, n);
            answer += words1[2];
            calcAnswerAux5(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAuxA1(string& answer, vector<int>& digits, int m) {
        if (m == 8) {
            calcAnswerAux8(answer, digits);
        }
        else if (m == 7) {
            calcAnswerAux7(answer, digits);
        }
        else if (m == 6) {
            calcAnswerAux6(answer, digits);
        }
        else if (m == 5) {
            calcAnswerAux5(answer, digits);
        }
        else if (m == 4) {
            calcAnswerAux4(answer, digits);
        }
        else if (m == 3) {
            calcAnswerAux3(answer, digits);
        }
        else if (m == 2) {
            calcAnswerAux2(answer, digits);
        }
        else if (m == 1) {
            calcAnswerAux1(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux10(string& answer, vector<int>& digits) {
        if(digits[8] == 0) {
            int n = answer.size();
            calcAnswerIA(answer, n);
            answer += words1[1];
            calcAnswerAux8(answer, digits);
        }
        else {
            int n = answer.size();
            calcAnswerIA(answer, n);
            answer += words3[9 - digits[8]];
            answer += " ";
            answer += words1[1];
            calcAnswerAux8(answer, digits);
        }
    }
    //
    void calcAnswerAux9(string& answer, vector<int>& digits) {
        if (digits[9] == 0) {
            calcAnswerAux10(answer, digits);
        }
        else {
            int n = answer.size();
            calcAnswerIA(answer, n);
            answer += words2[9 - digits[9]];
            answer += " ";
            calcAnswerAux10(answer, digits);   
        }
    }
    //
    void calcAnswerAux11(string& answer, vector <int>& digits) {
        if (digits[10] == 0) {
            // pass
        }
        else {
            if (digits[10] == 1) {
                if (digits[9] == 0) {
                    answer += words2[8];
                }
                else {
                    answer += words4[9 - digits[9]];
                }
            }
            else {
                answer += words2[9 - digits[10]];
                answer += " ";
                if (digits[9] != 0) {
                    answer += words3[9 - digits[9]];
                }
            }
            int count = answer.size();
            calcAnswerIA(answer, count);
            answer += words1[1];
            calcAnswerAux9(answer, digits);
        }
        return;
    }
    //
    vector<int> makeDigits(vector <int>& digits, long long int n) {
        long long int n1 = n;
        while (n1 != 0) {
            digits.push_back(n1 % 10);
            n1 /= 10;
        }
        if (n == 0) {
            digits.push_back(0);
        }
        return digits;
    }
    //
    string calcAnswerAuxA2(string& answer, vector<int>& digits, 
    long long int n, int m) {
        if (m == 13) {
            answer += words3[8];
            answer += " ";
            answer += words1[0];
        }
        else if (m > 9) {
            if (m == 12) {
                answer += words3[9 - digits[11]];
                answer += " ";
                answer += words1[4];
                answer += " ";
                calcAnswerAux11(answer, digits);
            }
            else if (m == 11) {
                answer += words3[9 - digits[m - 1]];
                answer += " ";
                answer += words1[4];
                calcAnswerAux10(answer, digits);
            }
            else {
                if (digits[9] == 1) {
                    if (digits[8] == 0) {
                        answer += words2[8];
                    }
                    else {
                        answer += words4[9 - digits[8]];
                    }
                }
                else {
                    answer += words2[9 - digits[m - 1]];
                    answer += " ";
                    answer += words3[9 - digits[m - 2]];
                    answer += " ";
                }
                int count = answer.size();
                calcAnswerIA(answer, count);
                answer += words1[1];
                calcAnswerAux8(answer, digits);
            }
        }
        else if (m == 9) {
            int count = answer.size();
            calcAnswerIA(answer, n);
            answer += words3[9 - digits[8]];
            answer += " ";
            answer += words1[4];
            calcAnswerAux8(answer, digits);
        }
        else {
            calcAnswerAuxA1(answer, digits, m);
        }
        return answer;
    }
    //
    string calcAnswer(long long int n) {
        string answer = "";
        vector <int> digits;
        digits = makeDigits(digits, n);        
        int m = digits.size();
        calcAnswerAuxA2(answer, digits, n, m);
        // verify(n, answer);
        return answer;
    }
};

int main() {
    int t;
    int T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int n;
        cin >> n;
        Solution mySol;
        cout << mySol.calcAnswer(n) << endl;
    }
    return 0;
}
