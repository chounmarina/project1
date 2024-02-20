#include<iostream>
 using namespace std;
main()
{
    int i;
    for(int i=1; i<=1000 ;i++){
        if (i==100 || i==200 || i==300 || i==400 ||i==500)
        {
            continue;
        }
        cout << i<< "\n";
    }
    return 0;
}