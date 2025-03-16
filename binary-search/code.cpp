#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids integer overflow

        if (arr[mid] == target) 
        {
            return mid; // Found target
        }  else if (arr[mid] > target) 
        {
            high = mid - 1; // Search left half
        }
        else  
        {
            low = mid + 1; // Search right ha
        } 
    }
    return -1; // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Sorted Array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}