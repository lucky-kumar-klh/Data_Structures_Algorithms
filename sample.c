#include <stdio.h>
#include <limits.h>
int main(){
    int arr[5] = {10, 9, 8, 7, 6};
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < 5; i++){
        if ( arr[i] > max1 ){
            max2 = max1;
            max1 = arr[i];
        }
        else if ( max2 < arr[i] && max1 != arr[i] ){
            max2 = arr[i];
        }
    }
    printf("First Max = %d\n", max1);
    printf("Second Max = %d",max2);
    return 0;
}