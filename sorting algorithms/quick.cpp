#include<iostream>
using namespace std;
void quicksort(int*,int,int);
int seperation(int*,int,int);
void display(int*,int);
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

	quicksort(arr,0,size-1);
 
	// Sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void quicksort(int*arr,int st,int end) {

	if(st<end) {
		int index=seperation(arr,st,end);
		quicksort(arr,st,index-1);
		quicksort(arr,index+1,end);
	}
}
int seperation(int*arr,int st,int end) {
	int pivot=arr[end];
	int index=st-1;
	for(int i=st; i<end; i++) {
		if(arr[i]<pivot) {
			index++;
			int temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		}
	}
	index++;
	int temp=arr[index];
	arr[index]=arr[end];
	arr[end]=temp;

	return index;
}
 