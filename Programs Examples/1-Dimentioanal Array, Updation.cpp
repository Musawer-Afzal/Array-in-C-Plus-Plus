#include<iostream>
using namespace std;
int main(){
	int arr[99], U, K, E;
	
	cout<<"Enter the Total Number of Elements: ";
	cin>>E;
	
	cout<<"\nEnter the Data Elements in the Array: "<<endl;
	for(int i = 0; i < E; i++){
		cin>>arr[i];
	}
	
	cout<<"\nEnter the Updating Index: ";
	cin>>K;
	cout<<"Value of the Index "<<K<<" is "<<arr[K]<<endl;
	cout<<"\nEnter the Updating Value: ";
	cin>>U;
	
	arr[K] = U;
	
	cout<<"\nArray after Updating: "<<endl;
	for(int i = 0; i < E; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
