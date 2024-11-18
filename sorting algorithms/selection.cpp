#include<iostream>
using namespace std;
 
int main()
{
	int arr[]={12,35,69,45,2};
	cout<<"original array="<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<4;i++)
	{
		int min=i;
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		 int temp=arr[i];
		 arr[i]=arr[min];
		 arr[min]=temp;
	}
		cout<<"\nSoretd array="<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}