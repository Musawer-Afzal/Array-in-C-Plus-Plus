#include<iostream>
using namespace std;
int main(){
	int arr[99], E, K, I;
	 
	 cout<<"Enter the Total Number of Elements: ";
	 cin>>E;
	 
	 cout<<"Enter the Array Elements"<<endl;
	 for(int i = 0; i < E; i++){
	 	cin>>arr[i];
	 }
	 //INSERTING A DATA ITEM IN AN ARRAY
	 cout<<"Inserting an Element to an Existing Array"<<endl<<endl;
	 cout<<"Enter the Inserting Index: ";
	 cin>>K;
	 
	 for(int i = E; i > K; i--){
	 	arr[i] = arr[i - 1];
	 }
	 
	 cout<<"Enter the Inserting Value: ";
	 cin>>I;
	 arr[K] = I;
	 
	 cout<<"Array after Inserting the Value"<<endl;
	E = E + 1;
	 for(int i = 0; i < E; i++){
	 	cout<<arr[i]<<" ";
	 }
	 return 0;
}
