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
    Solution() {
        // pass
    }
    //
    //
    void calcAnswerIA(string& answer, int n) {
        if (n > 0) {
            if (answer[n - 1] != ' ') {
                answer += " ";
            }
        }
    }
    //
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
    /*
        ```calcAnswerAuxA1```
        Sorts the last digit (units digit)
    */
    //
    void calcAnswerAuxA1(string& answer, vector <int>& digits, int m) {
        if (digits.size() == 1) {
            if (digits[m - 1] == 0) {
                answer += words3[9];
            }
            else {
                answer += words3[9 - digits[m - 1]];
            }
        }
        return;
    }
    //
    /*
    For the last two digits, evaluates answer string
    */
    // last two digits calc (in words)
    void calcAnswerAuxA2(string& answer, vector <int>& digits, int m) {
        //
        calcAnswerIA(answer, answer.size());
        //
        if (digits[m - 1] == 1) {
            calcAnswerIA(answer, answer.size());
            if (digits[m - 2] == 0) {
                answer += words2[8];
            }
            else {
                answer += words4[9 - digits[m - 2]];
            }
        }
        else {
            calcAnswerIA(answer, answer.size());
            if (digits[m - 1] == 0) {
                answer += words3[9 - digits[m - 2]];
            }
            else { // ```digits``` at ```m - 1``` not {0, 1}
                //
                calcAnswerIA(answer, answer.size());                
                // ```digits``` at ```m - 2``` zero
                if (digits[m - 2] == 0) {
                    answer += words2[9 - digits[m - 1]];
                }
                else { // ```digits``` at m - 2 non-zero 
                    answer += words2[9 - digits[m - 1]];
                    //
                    answer += " ";
                    //
                    answer += words3[9 - digits[0]];
                }
            }
        }
        return;
    }
    //
    // last digits from calcAuxm th function
    void calcAnswerAuxA3(string& answer, vector <int>& digits, int m) {
        //;
        calcAnswerIA(answer, answer.size());
        // when ```digits``` at ```m - 1``` is non-zero
        if (digits[m - 1] != 0) {
            answer += words3[9 - digits[m - 1]];
            answer += " ";
            answer += words1[4];
            //
            if (digits[m - 2] == 0) {
                
                calcAnswerIA(answer, answer.size());
                if (digits[m - 3] != 0) {
                    answer += words3[digits[m - 3]];
                }
            }
            else { // ```digits``` at ```m - 2``` is non-zero
                
                calcAnswerIA(answer, answer.size());
                if (digits[m - 2] == 1) {
                    if (digits[m - 3] == 0) {
                        answer += words2[8];
                    }
                    else {
                        answer += words4[9 - digits[m - 3]];
                    }
                }
                else {
                    if (digits[m - 3] == 0) {
                        answer += words2[9 - digits[m - 2]];
                    }
                    else {
                        answer += words2[9 - digits[m - 2]];
                        //
                        answer += " ";
                        //
                        answer += words3[9 - digits[m - 3]];
                    }
                }
            }
        }
        else { // // ```digits``` at ```m - 1``` is zero
            
            calcAnswerIA(answer, answer.size());
            // ```digits``` at ```m - 2``` is  zero
            if (digits[m - 2] == 0) {
                if (digits[m - 3] != 0) {
                    answer += words3[9 - digits[m - 3]];
                }
            }
            // ```digits``` at ```m - 2``` is non - zero
            else {
                
                calcAnswerIA(answer, answer.size());
                if (digits[m - 2] == 1) {
                    if (digits[m - 3] == 0) {
                        answer += words2[8];
                    }
                    else {
                        answer += words4[9 - digits[m - 3]];
                    }
                }
                else { // ```digits``` at ```m - 2``` is not 1
                    answer += words2[9 - digits[m - 2]];
                    if (digits[m - 3] != 0) {
                        answer += words3[9 - digits[m - 3]];
                    }
                }
            }
        }
        //
        return;
    }
    //
};

class SolutionHelper: public Solution {
public:
// adding the units digit place
    void calcAnswerAux1(string& answer, vector<int>& digits, 
    bool FLAG = true) {
        if (FLAG && (digits[0] == 0)) {
            answer += words3[9];
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
            //;
            calcAnswerIA(answer, answer.size());
            //
            if (digits[1] == 1) {
                
                calcAnswerIA(answer, answer.size());
                if (digits[0] == 0) {
                    answer += words2[8];
                }
                else {
                    answer += words4[9 - digits[0]];
                }
            }
            else {
                
                calcAnswerIA(answer, answer.size());
                if (digits[0] == 0) {
                    answer += words2[9 - digits[1]];
                }
                else {
                    
                    answer += words2[9 - digits[1]];
                    //
                    answer += " ";
                    //
                    answer += words3[9 - digits[0]];
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
            //;
            calcAnswerIA(answer, answer.size());
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
            // pass
        }
        else {
            //;
            calcAnswerIA(answer, answer.size());
            answer += words3[9 - digits[3]];
            answer += " ";
            answer += words1[3];
            //
            calcAnswerAuxA3(answer, digits, 3);
        }
        return;
    }
    
    void calcAnswerAux5(string& answer, vector<int>& digits) {
        if (digits[4] == 0) {
            // pass
        }
        else {
            calcAnswerIA(answer, answer.size());
            if (digits[4] == 1) {
                if (digits[3] == 0) {
                    answer += words2[8];
                }
                else {
                    answer += words4[9 - digits[3]];
                }    
            }
            else {
                answer += words2[9 - digits[4]];
                if (digits[3] == 0) {
                    answer += words2[9 - digits[4]];
                }
                else {
                    answer += words2[9 - digits[4]];
                    answer += " ";
                    answer += words3[9 - digits[3]];
                }
            }
            //
            //;
            calcAnswerIA(answer, answer.size());
            answer += words1[3];
            //
            calcAnswerAux3(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux6(string& answer, vector<int>& digits) {
        if (digits[5] == 0) {
            // pass
        }
        else {
            //;
            calcAnswerIA(answer, answer.size());
            //
            calcAnswerAuxA3(answer, digits, 6);
            //
            
            calcAnswerIA(answer, answer.size());
            //
            answer += words1[3];
            //
            calcAnswerAuxA3(answer, digits, 3);
        }
        return;
    }
    //
    void calcAnswerAux7(string& answer, vector<int>& digits) {
        if (digits[6] == 0) {
            calcAnswerAux6(answer, digits);
        }
        else {
            calcAnswerIA(answer, answer.size());
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
            // pass
        }
        else {
            //;
            calcAnswerIA(answer, answer.size());
            // getting 10s digit words
            if (digits[7] == 1) {
                if (digits[6] == 0) {
                    answer += words2[8];
                }
                else {
                    answer += words4[9 - digits[6]];
                }
            }
            else {
                if (digits[6] == 0) {
                    answer += words2[9 - digits[7]];
                }
                else {
                    answer += words2[9 - digits[7]];
                    answer += " ";
                    answer += words3[9 - digits[6]];
                }
            }
            //
            
            calcAnswerIA(answer, answer.size());
            //
            answer += words1[2];
            //
            calcAnswerAux6(answer, digits);
        }
        return;
    }
    //
    //
    void calcAnswerAux9(string& answer, vector<int>& digits) {
        if(digits[8] == 0) {
            // pass
        }
        else {
            //;
            calcAnswerIA(answer, answer.size());
            // hundreds' millions
            answer += words3[9 - digits[8]];
            answer += " ";
            answer += words1[4];
            answer += " ";
            //
            if (digits[7] == 1) {
                
                calcAnswerIA(answer, answer.size());
                if (digits[6] == 0) {
                    answer += words2[8];
                }
                else {
                    answer += words4[9 - digits[6]];
                }
            }
            else {
                //
                calcAnswerIA(answer, answer.size());
                if (digits[6] == 0) {
                    answer += words2[9 - digits[7]];
                }
                else {
                    answer += words2[9 - digits[7]];
                    answer += " ";
                    answer += words3[9 - digits[6]];
                }
            }
            //
            
            calcAnswerIA(answer, answer.size());
            answer += words1[2];
            calcAnswerAux6(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux10(string& answer, vector<int>& digits) {
        if (digits[9] == 0) {
            // pass
        }
        else {
            calcAnswerIA(answer, answer.size());
            answer += words3[9 - digits[9]];
            answer += " ";
            answer += words1[1];
            calcAnswerAux9(answer, digits);   
        }
        return;
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
            //;
            calcAnswerIA(answer, answer.size());
            answer += words1[1];
            calcAnswerAux9(answer, digits);
        }
        return;
    }
    //
    void calcAnswerAux12(string& answer, vector <int>& digits) {
        if (digits[11] == 0) {
            // pass
        }
        else {
            ;
            calcAnswerIA(answer, answer.size());
            answer += words3[9 - digits[11]];
            answer += " ";
            answer += words1[4];
            // if 11th digit is 1
            if (digits[10] == 1) {
                if (digits[9] == 0) {
                    
                    calcAnswerIA(answer, answer.size());
                    answer += words2[8];
                }
                else {
                    
                    calcAnswerIA(answer, answer.size());
                    answer += words4[9 - digits[8]];
                }
            }
            else {  // if 11th digit is not 1
                // if 10th digit is 0
                if (digits[9] == 0) {
                    
                    calcAnswerIA(answer, answer.size());
                    answer += words2[9 - digits[9]];
                }
                else {
                    
                    calcAnswerIA(answer, answer.size());
                    answer += words2[9 - digits[9]];
                    //
                    answer += " ";
                    //
                    answer += words3[9 - digits[8]];
                }
            }
            
            calcAnswerIA(answer, answer.size());
            // calc answer done till billions' place
            //
            // add billion to the answer
            answer += words1[1];
            calcAnswerAux9(answer, digits);
        }
        return;
    }
};

class CalculateSolution: public SolutionHelper {
public:
    string calcAnswer(long long int n) {
        //
        string answer = "";
        vector <int> digits;
        digits = makeDigits(digits, n);        
        //
        int m = digits.size();
        //
        if (m == 13) {
            answer += words3[8];
            answer += " ";
            answer += words1[0];
        }
        else if (m == 0) {
            // pass
        }
        else {
            if (m == 12) {
                calcAnswerAux12(answer, digits);
            }
            else if (m  == 11) {
                calcAnswerAux11(answer, digits);
            }
            if (m == 10) {
                calcAnswerAux10(answer, digits);
            }
            else if (m == 9) {
                calcAnswerAux9(answer, digits);
            }
            else if (m == 8) {
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
        }
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
        CalculateSolution Sol1;
        cout << Sol1.calcAnswer(n) << endl;
    }
    return 0;
}
