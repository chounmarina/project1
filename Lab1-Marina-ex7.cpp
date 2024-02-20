#include<iostream>
using namespace std;
main(){
   int x,y;
   int *p1=&x;
   int *p2=&y;

   cout<<"Enter the value of x: ";
   cin>>x;
   cout<<"Enter the value of y: ";
   cin>>y;
   cout<<endl;

   cout<<"Address of x: "<<p1<<endl;
   cout<<"Address of y: "<<p2<<endl;
   return 0;  
}
