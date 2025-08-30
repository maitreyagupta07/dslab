#include<iostream>
using namespace std;

struct Triplet {
    int row, col, val;
};

void printTriplets(vector<Triplet>& triplets) {
    cout << "Row\tCol\tVal\n";
    for(auto &t : triplets) {
        cout << t.row << "\t" << t.col << "\t" << t.val << "\n";
    }
    cout << endl;
}

void diagonalMatrix(vector<vector<int>> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout << "arr[" << i << "][" << j << "]: ";/*only diagonal elements are non zero
                and only they matter*/
                cin >> arr[i][j];//user input diagonal elements
            }
        }
    }
    vector<Triplet> triplets;
    for(int i=0;i<n;i++) {
        if(arr[i][i] != 0) {
            triplets.push_back({i, i, arr[i][i]});//non zero elements from array are put into triplets in triplet form
        }
    }
    cout << "Diagonal Matrix (Triplet Form):\n";
    printTriplets(triplets);
    cout << endl;
}

void triDiagnolMatrix(vector<vector<int>> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i==j+1 || i==j-1){//all elements in main diagonal+diagonal above and below
                cout << "arr[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }
    vector<Triplet> triplets;
    for(int i=0;i<n;i++) {
        if(arr[i][i] != 0) {
            triplets.push_back({i, i, arr[i][i]});
        }
    }
    cout << "Tri-Diagonal Matrix (Triplet Form):\n";
    printTriplets(triplets);
    cout << endl;
}

void lowerTriangularMatrix(vector<vector<int>> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout << "arr[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }
    vector<Triplet> triplets;
    for(int i=0;i<n;i++) {
        if(arr[i][i] != 0) {
            triplets.push_back({i, i, arr[i][i]});
        }
    }
    cout << "Lower Triangular Matrix (Triplet Form):\n";
    printTriplets(triplets);
    cout << endl;
}

void upperTriangularMatrix(vector<vector<int>> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                cout << "arr[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }
    vector<Triplet> triplets;
    for(int i=0;i<n;i++) {
        if(arr[i][i] != 0) {
            triplets.push_back({i, i, arr[i][i]});
        }
    }
    cout << "Upper Triangular Matrix (Triplet Form):\n";
    printTriplets(triplets);
    cout << endl;
}

void symmetricalMatrix(vector<vector<int>> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                cout << "arr[" << i << "][" << j << "]: ";
                cin >> arr[i][j];
                arr[j][i] = arr[i][j];
            }
        }
    }
    vector<Triplet> triplets;
    for(int i=0;i<n;i++) {
        if(arr[i][i] != 0) {
            triplets.push_back({i, i, arr[i][i]});
        }
    }
    cout << "Symmetrical Matrix (Triplet Form):\n";
    printTriplets(triplets);
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr1(n, vector<int>(n,0));
    vector<vector<int>> arr2(n, vector<int>(n,0));
    vector<vector<int>> arr3(n, vector<int>(n,0));
    vector<vector<int>> arr4(n, vector<int>(n,0));
    vector<vector<int>> arr5(n, vector<int>(n,0));
    cout << "Diagonal Matrix:" << endl;
    diagonalMatrix(arr1, n);

    cout << "Tri-Diagnol Matrix" << endl;
    triDiagnolMatrix(arr2, n);

    cout << "Lower Triangular Matrix" << endl;
    lowerTriangularMatrix(arr3, n);
    
    cout << "Upper Triangular Matrix" << endl;
    upperTriangularMatrix(arr4, n);

    cout << "Symmetrical Matrix" << endl;
    symmetricalMatrix(arr5, n);

    return 0;
}
    