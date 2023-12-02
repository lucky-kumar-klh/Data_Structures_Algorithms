#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
	int pivot = arr[end], i = start-1;

	for (int j = start; j <= end; j++){
		if ( arr[j] < pivot ){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	i++;
	swap(arr[i], arr[end]);
	return i;
}

void quickSort(int arr[], int start, int end){

	if (start >= end) return;  // base case
	int pivot = partition(arr, start, end);

	quickSort(arr, start, pivot-1);
	quickSort(arr, pivot+1, end);

}

int main(){
	int arr[9] = {8,2,5,3,9,4,7,6,1};
	int high = 9, low = 0;
	cout << "Before Sorting : ";
	for (int i : arr)
		cout << i << " ";

	quickSort(arr, low, high-1);

	cout << "\nAfter Sorting : ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;
	return 0;
}