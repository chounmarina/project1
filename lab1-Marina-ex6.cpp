#include<iostream>
#include<string>

struct person
{
    std::string name;
    int age;
    std::string ZodiacSign;
};
int main(){
    const int max_people=20;
    person people[max_people];
    int i;
    
    for( i =0; i<4; i++){
        std::cout<<"The Information Of Person"<<i+1<<":"<<std::endl;
        std::cout<<"Input name: ";
        std::cin>>people[i].name;
        std::cout<<"Input age: ";
        std::cin>>people[i].age;
        std::cout<<"Input Zodiac sign: ";
        std::cin>>people[i].ZodiacSign;
        std::cout<<std::endl;
    }

    std::cout<<"*****Display Each Person Information:*******"<<std::endl;
    for(i=0;i<4;i++){
        //std::cout<<"Person" << i+1 <<":" <<std::endl;
        // std::cout<<"Name: " << people[i].name << std::endl;
        // std::cout<<"age: " << people[i].age << std::endl;
        // std::cout<<"Zodiac Sign: " << people[i].ZodiacSign << std::endl;
        std::cout <<people[i].name <<"\t"<<people[i].age<<"\t"<<people[i].ZodiacSign<<"\n";   
    }
       

    int oldestAge = people[0].age;
    int oldestPerson = 0;
    for(i=1;i<4;i++){
        if (people[i].age > oldestAge){
            oldestAge = people[i].age;
            oldestPerson =i;
        }
    }
    std::cout<<"Person with the oldest age:"<<std::endl;
    // std::cout<<"name: "<<people[oldestPerson].name<<std::endl;
    // std::cout<<"age: "<<people[oldestPerson].age<<std::endl;
    // std::cout<<"zodiac sign: "<<people[oldestPerson].ZodiacSign<<std::endl; 
    std::cout <<people[oldestPerson].name <<"\t"<<people[oldestPerson].age<<"\t"<<people[oldestPerson].ZodiacSign<<"\n"; 

return 0;
}