#include<iostream>
 using namespace std;
main(){
    int n;
    int sum =0;

    cout <<"Input Number: \n";
    
    while(true){
        cin >>n;

        if ( n==-1){
            break;
        }
        sum +=n;
    }

    cout <<"Sum of Input Number excluding -1: " << sum<< endl;
return 0; 
}

