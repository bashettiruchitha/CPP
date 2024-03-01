#include<iostream>

using namespace std;

int max_sum_subarray(int arr[], int n, int k) {
    if (n < k || n == 0 || k <= 0) {
        return -1;
    }
    
    int max_sum = -1;
    for (int i = 0; i <= n - k; ++i) //iterate 
    {
        int current_sum = 0;
        for (int j = i; j < i + k; ++j) {
            current_sum += arr[j];
        }
        max_sum = max(max_sum, current_sum);//max values stores (-1,56)
    }
    
    return max_sum;
}
 
int main() {
    int arr[] = {1, 5, 1, 6, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << max_sum_subarray(arr, n, k) << endl; // Output: 12
    
    return 0;
}