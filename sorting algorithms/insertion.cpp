//`insertion sort
#include<iostream>
using namespace std;

void insertion(int*arr) {
	for(int i=1;i<6;i++)
	{
		int current=arr[i];
		int j=i-1;
		while(j>=0 && current<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
 
}

void display(int*arr)
{
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main() {
	int arr[]= {2,6,1,8,45,3};
	cout<<"Original Array="<<endl;;
	display(arr);
	insertion(arr);
     cout<<"\nSoretd Array="<<endl;
	 display(arr);

	return 0;
}