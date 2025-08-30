#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int val) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low +high) / 2;
        if (arr[mid] == val)
            return mid;
        else if (arr[mid] < val)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 7, 10, 14, 18, 23, 31};
    int n = sizeof(arr);
    int val = 18;
    int result = binarySearch(arr, n, val);

    if (result != -1)
        cout << "Element " << val << "at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}