#include<iostream>
#include<conio.h>
using namespace std;
int main(){ 
 int A [100], I, K, N, ITEM; 
 cout<<"Enter Total number of elements in array: N = "; 
 cin>>N; 
 cout<<endl<<"Enter N number of elements into ODA:"<<endl<<endl; 
 for (I=0; I<N; I++) 
 cin>>A[I]; 
 cout<<endl<<"Elements in ODA: "; 
 for (I=0; I<N; I++) 
 cout<<A[I]<<" "; 
 cout<<endl<<endl<<"Enter the element to insert into ODA: "; 
 cin>>ITEM; 
 cout<<endl<<"Enter position of the element to be inserted: "; 
 cin>>K; 
 // Start INSERTION ALGORITHM 
 I = N; 
 while(I>K) 
 { 
 A [I] = A [I-1]; 
 I = I-1; 
 } 
A[K] = ITEM; 
 N = N+1; 
cout<<endl<<"Total number of elements in array after insertion of an element: "<<N<<endl; 
 // End of Insertion Algorithm 
 cout<<endl<<"Array after insertion of an element: "; 
 for (I=0; I<N; I++) 
 cout<<A[I] <<" "; 
 getch (); 
} 
