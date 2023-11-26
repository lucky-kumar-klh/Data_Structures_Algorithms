#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr){
	for (int i = 0; i < arr.size(); i++){
		for (int j = 1; j < arr.size(); j++){
			if (arr[j - 1] < arr[j])
				swap(arr[j - 1], arr[j]);
		}
	}
}

int main(){
	vector<int> arr = {1, 4, 2, 7, 5, 8};

	BubbleSort(arr);

	for (auto i : arr)
		cout << i << " ";

	return 0;
}