#include <iostream>
using namespace std;
int missingK(int arr[], int size, int k){
    int ans = 0;
    int start = 1, end = arr[size-1], count = 0;
    for ( int i = start, j = 0; i <= end; ){
        if ( i <= arr[j] ){
            if ( i != arr[j] )  count++;
            if ( count == k ){
                ans = i;
                break;
            }
            i++;
        }
        else  j++;
    }
    if ( ans == 0 ) ans = k + arr[size-1];
    return ans;
}
int main() {
    int arr[4] = {1,2,3,4};
    int k = 2;
    int ans = missingK(arr, 4, k);
    cout << "K is " << ans;
}