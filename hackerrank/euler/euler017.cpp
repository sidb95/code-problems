/*
euler017
bhatoresiddharth@gmail.com
sidb95
25 May 2024
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
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
    
    /*
        Calculates the integer number N in words.
    */
    
    void calcAnswerAux1(string& answer, vector<int>& digits) {
        if (digits[0] == 0) {
            // pass
        }
        else {
            answer += words3[9 - digits[0]];
        }
        return;
    }
    
    //
    void calcAnswerAux2(string& answer, vector<int>& digits) {
        if (digits[1] == 0) {
            answer += " ";
            calcAnswerAux1(answer, digits);
        }
        else {
            answer += " ";
            answer += words2[9 - digits[1]];
            answer += " ";
            calcAnswerAux1(answer, digits);
        }
        return;                                      
    }
    
    //
    void calcAnswerAux3(string& answer, vector<int>& digits) {
        if (digits[2] == 0) {
            calcAnswerAux2(answer, digits);
        }
        else {
            answer += " ";
            answer += words3[9 - digits[2]];
            answer += " ";
            answer += words1[4];
            calcAnswerAux2(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux4(string& answer, vector<int>& digits) {
        if (digits[3] == 0) {
            calcAnswerAux3(answer, digits);
        }
        else {
            answer += " ";
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
            answer += " ";
            answer += words3[9 - digits[5]];
            answer += " ";
            answer += words2[9 - digits[4]];
            answer += " ";
            calcAnswerAux4(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux6(string& answer, vector<int>& digits) {
        if (digits[5] == 0) {
            calcAnswerAux5(answer, digits);
        }
        else {
            answer += " ";
            answer += words3[9 - digits[5]];
            answer += " ";
            answer += words1[2];
            answer += " ";
            calcAnswerAux5(answer, digits);   
        }
        return;
    }
    //
    void calcAnswerAux7(string& answer, vector<int>& digits) {
        if (digits[6] == 0) {
            calcAnswerAux6(answer, digits);
        }
        else {
            answer += " ";
            answer += words2[9 - digits[6]];
            answer += " ";
            answer += words1[2];
            answer += " ";
            answer += words3[9 - digits[5]];
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
            answer += " ";
            answer += words3[9 - digits[7]];
            answer += " ";
            answer += words1[4];
            answer += " ";
            if ((digits[6] != 0 && digits[5] != 0)) {
                answer += words2[9 - digits[6]];
                answer += " ";
                answer += words3[9 - digits[5]];
            }
            calcAnswerAux7(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux9(string& answer, vector<int>& digits, int m) {
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
                answer += " ";
                answer += words1[1];
                calcAnswerAux8(answer, digits);
            }
        else {
            answer += " ";
            answer += words3[9 - digits[8]];
            answer += " ";
            answer += words1[1];
            calcAnswerAux8(answer, digits);
        }
    }
    //
    void calcAnswerAux11(string& answer, vector<int>& digits) {
        if (digits[9] == 0) {
            calcAnswerAux10(answer, digits);
        }
        else {
            answer += " ";
            answer += words2[9 - digits[9]];
            answer += " ";
            calcAnswerAux10(answer, digits);   
        }
    }
    //
    string calcAnswer(int n) {
        string answer = "";
        vector <int> digits;
        int n1 = n;
        while (n1 != 0) {
            digits.push_back(n1 % 10);
            n1 /= 10;
        }
        long long int m = digits.size();
        if (m == 12) {
            answer += words3[8];
            answer += " ";
            answer += words1[0];
        }
        else if (m > 9) {
            if (m == 11) {
                answer += words3[9 - digits[m - 1]];
                answer += " ";
                answer += words1[4];
                calcAnswerAux10(answer, digits);
            }
            else {
                answer += words2[9 - digits[m - 1]];
                answer += " ";
                answer += words1[1];
                answer += " ";
            }
        }
        else if (m == 9) {
            answer += words3[9 - digits[8]];
            answer += " ";
            answer += words1[1];
            calcAnswerAux8(answer, digits);
        }
        else {
            calcAnswerAux9(answer, digits, m);
        }
        return answer;
    }
};

int main() {
    int t;
    int T;
    cin >> T;
    for (t = 0; t < T; t++) {
        int n;
        cin >> n;
        Solution mySol;
        cout << mySol.calcAnswer(n) << endl;
    }
    return 0;
}
