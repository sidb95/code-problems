/*
euler011
bhatoresiddharth@gmail.com
sidb95
21 May 2024
*/

#include <iostream>
#include <vector>

using namespace std;


bool inGrid1 (int posi, int posj, int n);
bool inGrid2(int posi, int posj, int n);
int calcBlock1(vector< vector<int> > grid, int n, int posi, int posj);
int calcAnswer(vector< vector<int> > grid, int n, int posi, int posj);

bool inGrid1 (int posi, int posj, int n) {
    // can calc right
    if (posj < n) {
        if ((posi + 3) < n) {
            return true;
        }
    }
    return false;
}

bool inGrid2(int posi, int posj, int n) {
    if (posi < n) {
        if ((posj + 3) < n) {
            return true;
        }
    }
    return false;
}

int calcBlock1(vector< vector<int> > grid, int n, 
int posi, int posj) {
    int retAnswer = 0;
    bool propn1, propn2;
    propn1 = inGrid1(posi, posj, grid);
    propn2 = inGrid2(posi, posj, grid);
    int answer[4];
    for (int i = 0; i < 3; i++) {
        answer[i] = 1;
    }
    // check with FLAG1, initially true
    for (int l = 0; l < 4; l++) {
        FLAG1 = false;
        int x, y;
        if (propn1) {
            x = posi + l;
            y = posj;
            answer[0] *= grid[x][y];
        }
        if (propn2) {
            x = posi;
            y = posj + l;
            answer[1] *= grid[x][y]);
        }
        if (propn1 && propn2) {
            x = posi + l;
            y = posj + l;
            answer[2] *= grid[x][y]);
        }
    }
    return max(max(answer[0], answer[1]), answer[2]);
}

int calcAnswer(vector< vector<int> > grid, int n, int posi, int posj) {
    // current itr position
    int posi, posj;
    // last relevant position
    int posl1 = 0;
    int posr1 = 0;
    // answer to be returned
    int retAnswer = 0;
    // current product
    int answer;
    // inGrid? posi, posj
    bool propn1, propn2;
    //
    bool FLAG = true;
    // iterate over n elements in grid, line by line
    for (posi = 0; posi < n; posi++) {
        for (posj = 0; posj < n; posj++) {
            answer = calcBlock1(FLAG, grid, n, posi, posj);
            retAnswer = max(retAnswer, answer);
        }
    }
    return retAnswer;
}


int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0; grid_i < 20; grid_i++){
    	for(int grid_j = 0; grid_j < 20; grid_j++){
    		cin >> grid[grid_i][grid_j];
    	}
    }
    cout << calcAnswer(grid, 20, 0, 0) << endl;
    return 0;
}
