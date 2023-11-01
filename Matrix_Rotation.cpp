#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{ 1, 2, 3, 4},
                               { 5, 6, 7, 8},
                               { 9,10,11,12},
                               {13,14,15,16}};
    vector<vector<int>> brr;
    int size = arr.size()-1, col = arr[0].size()-1;
    int x;
    for (int i = 0; i <= size; i++)
    {
        x = size-i;
        for (int j = 0; j <= size; j++)
        {
            brr[j][size-i] = arr[i][j];
        }
    }
    for (int i = 0; i < brr.size(); i++){
        for (int j = 0; j < brr.size(); j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}