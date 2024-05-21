/*
euler011
bhatoresiddharth@gmail.com
sidb95
21 May 2024
*/

#include <iostream>
#include <vector>

using namespace std;

int calcAnswer(vector< vector<int> > grid, int n);

int calcAnswer(vector< vector<int> > grid, int n) {

}


int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0; grid_i < 20; grid_i++){
    	for(int grid_j = 0; grid_j < 20; grid_j++){
    		cin >> grid[grid_i][grid_j];
    	}
    }
    cout << calcAnswer(grid, 20) << endl;
    return 0;
}
