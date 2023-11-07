#include <bits/stdc++.h>
using namespace std;
void sortArray(vector<int>& arr){
    int min;
    for (int i = 0; i < arr.size()-1; i++){
        min = i;
        for (int j = i+1; j < arr.size(); j++){
            if ( arr[j] < arr[min] )
                min = j;
        }
        if ( arr[min] < arr[i] )
            swap(arr[i], arr[min]);
    }
    
}
void print(vector<int>& arr){
    for ( int i : arr )
        cout << i << " ";
}

int main(){
    vector<int> arr = {10,8,2,3,1,4};
    print(arr);
    sortArray(arr);

    cout << endl;

    print(arr);
    return 0;
}