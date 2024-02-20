#include<iostream>
 using namespace std;
 int sumSuit(int n)
 {
     int sum = 0;
     for(int i =1; i<=n; i++){
         sum+=i;
     }
     return sum;
 }
 int sumDigit(int n) {
     int sum = 0;
     while (n != 0) {
         sum += n % 10;
         n /= 10;
     }
     return sum;
 }
 int main()
 {
     while (true)
     {
        int choice;
        cout<<"1.SumSuit"<<endl;
        cout<<"2.SumDigit"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter Your Choice: "; cin>>choice;
        if(choice==1)
        {
           int n;
           int result;
           cout<<"Enter N: "; cin>>n;
           result = sumSuit(n);
           cout<<"Result(1+2..+n): "<<result<<endl;
        }
        else if(choice==2)
        {
           int n;
           int result;
           cout<<"E.g: Let n=152, then sum digits = 1+5+2 = 8"<<endl;
           cout<<"Enter Your Number: "; cin>>n;
           result = sumDigit(n);
           cout<<"Result: "<<result<<endl;
       }
       else if(choice==3){
         break;
       }
       else
       {
         cout<<"Please Try Again"<<endl;
       }
           cout<<endl;
     }

     return 0;
 }
    
