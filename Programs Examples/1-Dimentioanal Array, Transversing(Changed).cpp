#include<iostream>
using namespace std;
int main(){
	int arr[99], UB, LB;
	
	cout<<"Enter the Upper Boundary: ";
	cin>>UB;
	cout<<"Enter the Lower Boundary: ";
	cin>>LB;
	
	cout<<"Enter the Date Elements of the Array: "<<endl;
	for(int i = 0; i <= UB; i++){
		cin>>arr[i];
	}
	
	cout<<"Print Data Elements according to Lower Boundary"<<endl;
	for(int i = LB; i <= UB; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
