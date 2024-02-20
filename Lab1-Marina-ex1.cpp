#include<iostream>
#include<cmath>

using namespace std;
main(){
double a,b,c;
double delta,root1,root2;

cout << "Enter coefficient a: ";
cin >> a;
cout << "Enter coefficient b: ";
cin >> b;
cout << "Enter coefficient c: ";
cin >> c;
delta = b * b - 4 * a * c;

if (delta>0){
    root1=(-b+sqrt(delta))/(2*a);
    root2=(-b-sqrt(delta))/(2*a);
    cout <<"Root 1=  "<<root1<< endl;
    cout <<"Root 2=  "<<root2<< endl;
}else if (delta==0){
    root1= -b/(2*a);
    cout<<"root 1=root 2= "<<root1<< endl;
}else {
    double realPart= -b /(2*a);
    double imaginaryPart= sqrt(-delta)/(2*a);
    cout << "root 1= " <<realPart <<"+"<< imaginaryPart <<"i"<< endl;
    cout << "root 2= " <<realPart <<"-"<< imaginaryPart <<"i"<< endl;
}
return 0;    
}






