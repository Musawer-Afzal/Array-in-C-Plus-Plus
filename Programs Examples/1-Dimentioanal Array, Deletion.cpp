#include<iostream> 
#include<conio.h>
using namespace std;
int main() 
{  
 int A [200], I, K, N; 
 cout<<"Enter Total number of filled memory locations in array: N = "; 
 cin>>N; 
 cout<<endl<<"Enter N number of elements into Array:"<<endl<<endl; 
 for (I=0; I<N; I++) 
 cin>>A[I]; 
 cout<<endl<<"Elements in Array: "; 
 for (I=0; I<N; I++) 
 cout<<A[I]<<" "; 
 cout<<endl<<endl<<"Enter position of an element to be deleted: k = "; 
 cin>>K; 
// Start DELETION ALGORITHM 
I = K;
cout<<endl<<"Element to be deleted at position "<<I<<": "<<A[I]<<endl<<endl; 
while (I<N-1) 
{ 
 A [I] = A [I+1]; 
 I = I+1; 
} 
N = N-1; 
A [N] = -1;
// End of DELETION ALGORITHM
cout<<"Total number of elements in array after deletion an element: "<<N<<endl<<endl; 
cout<<"Array after deletion of an element:"<<endl; 
for (I=0; I<=N; I++) 
cout<<A[I]<<" "; 
getch (); 
}
