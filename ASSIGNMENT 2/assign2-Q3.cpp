#include <iostream>
using namespace std;


int missingnumlt(vector<int> &arr, int n) {//vector is the resizeable array of n integers..arr points to the array we will pass(pass by reference)
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {//mismatch occurs here
            return i + 1;
        }
    }
    return n;
}

// Using Binary Search
int missingnumbs(vector<int> &arr, int n) {
    int low = 0, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1) {
            low = mid + 1;//search on right
        } else {
            high = mid - 1;//search on left
        }
    }
    return low + 1;
}


int main(){
    int n;
    cin >> n;//user input no. of elements
    vector<int> nums(n);
    for(int i=0; i<n-1; i++) cin >> nums[i];//user input elements
    cout << missingnumlt(nums, n) << endl;
    cout << missingnumbs(nums, n) << endl;
    return 0;
}