#include<iostream>
#include<conio.h> 
using namespace std;
int main () { 
 int LA [50], LB, UB, K; 
 cout<<"Enter Upper Bound of the Array: UB = "; 
 cin>>UB; 
 cout<<endl<<"Enter Lower Bound of the Array: LB = "; 
 cin>>LB; 
 cout<<endl<<"Enter your Elements in the Array:"<<endl<<endl; 
 for (K=0; K<=UB; K++) {
 cin>>LA [K];
 }
 // Start TRAVERSING ALGORITHM 
 cout<<endl<<"Traversing Elements of the Array Starting from LB to UB: "; 
 K = LB; 
 while (K<=UB) 
 { 
 cout<<LA [K]<<" "; 
 K = K+1; 
 } 
 // End of TRAVERSING ALGORITHM 
 getch (); 
} 
