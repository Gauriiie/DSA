#include<iostream>
using namespace std;
int main() {

	int arr[]= {7,3,5,9,2};
	//printing original array
	cout<<"Original array="<<endl;
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<" ";
	}
	//sorting logic
	for(int i=0; i<5; i++) {
		for(int j=0; j<(5-1-i); j++) {
			if(arr[j]>arr[j+1]) {
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	//printing sorted array
	cout<<"\nSorted array="<<endl;
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}