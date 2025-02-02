//WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT.

#include<iostream>
using namespace std;

int main(){
    int number;
    
    cout << "Enter your age:";
    cin >>number;
    
    
    if(number/7)//if age is DIVISIBLE with 7
    {
        cout << "this number is  DIVISIBLE BY 7";
    }
    else{
        cout << "this number is not DIVISIBLE BY 7";
    }
    return 0;
}