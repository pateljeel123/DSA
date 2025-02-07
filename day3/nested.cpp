#include<iostream>
using namespace std;

int main(){
    int age;
    
    cout << "Enter a age:";
    cin >> age;
    
    if(age>=18){
        if(age<100){
            cout << "you are eligable for vote";
        }
        else{
           cout << "plzz enter a real age" ;
        }
    }
    else{
        if(age==0){
            cout << "age can't be a 0";
        }
        else{
            cout << "age is not a nagative";
        }
    }
    return 0;
}