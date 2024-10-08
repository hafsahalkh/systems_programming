#include <stdio.h>;

int binsearch(int target, int arr, int len) {
    int left = 0, right = len -1; 
    while (left <= right) {
        int mid = left >> 1 + right >> 1;
        int comp = target - arr[mid]; 
        if (comp < 0) // target is less than second half 
            right = mid - 1;
        else if (comp > 0) //target is greater than first half 
            left = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main() {
    int left = 18000000000, right = 20000000000;
    printf("mid must be %d. /n", left/2 + right/2); /* will result in overflow ! */
    printf("mid must be %d. \n", left + (right - left)/2);
    
    return 0;
}