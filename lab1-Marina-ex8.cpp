#include<iostream>
using namespace std;

void exchangeNumber(int* m,int* n){
    int p=*m;//backup
    *m=*n;  //change
    *n=p;    //restore old value
}    
int main(){
    int a=4;
    int b=7; 
    cout<<"Before exchange a:"<<a<<" ,b:"<<b<< endl;
    exchangeNumber(&a,&b);
    cout<<"After exchange a:"<<a<<" ,b:"<<b<< endl;
    return 0;
}