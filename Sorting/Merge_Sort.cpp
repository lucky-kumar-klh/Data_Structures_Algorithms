#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end) {

    // Create 2 arrays, i.e., left and right
    int mid = (start + end)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // Copy the elements
    int index = start; 
    for (int i = 0; i < len1; i++) {  // copy left array
        left[i] = arr[index];
        index++;
    }
    index = mid + 1;
    for (int i = 0; i < len2; i++) {  // copy right array
        right[i] = arr[index];
        index++;
    }

    // Algorithm - Merge two Sorted Arrays
    int l1 = 0, l2 = 0;
    index = start;
    while (l1 < len1 && l2 < len2) {
        if (left[l1] < right[l2]) {
            arr[index] = left[l1];
            index++;
            l1++;
        }
        else {
            arr[index] = right[l2];
            index++;
            l2++;
        }
    }

    // check for left out arrays
    while (l1 < len1) {
        arr[index] = left[l1];
        index++;
        l1++;
    }
    while (l2 < len2) {
        arr[index] = right[l2];
        index++;
        l2++;
    }

}

void mergeSort(int arr[], int start, int end) {

    // base case
    if (start >= end) return;

    int mid = (start + end) / 2;

    // divide the arrays
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    // merge them
    merge(arr, start, end);
}

int main(){

    int arr[5] = {3,2,5,1,4};
    int size = 5;
    cout << "\nBefore Sorting: ";
    for (auto i : arr) cout << i << " ";

    mergeSort(arr, 0, size-1);

    cout << "\nAfter Sorting: ";
    for (auto i : arr) cout << i << " ";

    return 0;
}