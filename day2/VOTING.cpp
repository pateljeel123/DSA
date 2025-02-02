//WAP TO CHECK THE VOTING ELIGIBILITY OF USER.

#include<iostream>
using namespace std;

 int main(){
     
     
     int age;
     
     cout << "Enter a age:";
     cin >> age;
     
    if(age==0 || age<=0){
         cout << "enter a valid age";
     }
     else if(age<18 ){
         cout << "you are not eligable for vote !!";
     }
     else if(age>=18){
         cout<< "you are Eligable for vote !!";
     }
    
     return 0;
 }