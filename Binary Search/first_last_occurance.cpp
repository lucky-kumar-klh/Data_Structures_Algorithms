#include <bits/stdc++.h>
using namespace std;
int lastSearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while ( start <= end )
    {
        if ( key == arr[mid] ) {
            return mid;
        }
        if ( key > arr[mid] ){
            start = mid+1;
        }
        if ( key < arr[mid] ){
            end = mid-1;
        }
    }
     
    return -1;
}
int firstSearch(int arr[], int size, int key){
    int a;
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while ( start <= end )
    {
        if ( key == arr[mid] ) {
            //a = mid;
            //arr[mid] = INT_MIN;
            return mid;
            
        }
        if ( key > arr[mid] ){
            start = mid+1;
        }
        if ( key < arr[mid] ){
            end = mid-1;
        }
    }
     
    return -1;
}
int main(){
    int arr[5] = {3,0,1,3,2};
    int size = 5;
    int key;
    cout << "Enter key : ";
    cin >> key;
    int x = firstSearch(arr,size,key);
    int y = lastSearch(arr,size,key);
    if ( x > y ) cout << y << " " << x <<endl;
    else cout << x << " " << y <<endl;
    return 0;
}