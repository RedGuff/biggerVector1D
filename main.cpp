#include <iostream>
#include <vector>

using namespace std;

void displayVector1D(vector<int>& Matrix) {
// for(int a = 0; a < Matrix.size(); a++) {
    for(int a : Matrix) { // Better! // http://www.cplusplus.com/forum/beginner/108606/
        cout << Matrix[a] << " ";
        }
    }

void biggerVector1D(vector<int>& Matrix, int newBigSize = 42, int dataDefault = 0) {
    while(Matrix.size() < newBigSize) {
        Matrix.push_back(dataDefault);
        }
    }

int main() {
    int N = 3;
    vector<int> Matrix(N, 0);
    displayVector1D(Matrix);
    cout << "\n";
    biggerVector1D(Matrix, 10, 1);
    displayVector1D(Matrix);
    cout << "\nOk." << endl;
    return 0;
    }
