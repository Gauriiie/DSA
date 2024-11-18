#include<iostream>
using namespace std;

void merge(int* arr, int st, int mid, int end) {
    int* temp = new int[(end - st) + 1];
    int i = st;    // for left array
    int j = mid + 1;  // for right array
    int k = 0;    // for temp array

    // Merge both halves into temp array
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    // Copy remaining elements from the left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    // Copy remaining elements from the right half
    while (j <= end) {
        temp[k++] = arr[j++];
    }
    // Copy elements back to the original array
    int x=0;
    int y=st;
    
    while(x<k)
    {
    	arr[y++] = temp[x++];
	}
         
    delete[] temp; // Free allocated memory
}

void divide(int* arr, int st, int end) {
    if (st >= end) // Base case: single element
        return;

    int mid = (st + end) / 2;
    // Recursively divide the left half
    divide(arr, st, mid);
    // Recursively divide the right half
    divide(arr, mid + 1, end);
    // Merge the two halves
    merge(arr, st, mid, end);
}

int main() {
    int size;
    cout << "Enter size of array:\n";
    cin >> size;

    int arr[size];
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting
    divide(arr, 0, size - 1);

    // Sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
