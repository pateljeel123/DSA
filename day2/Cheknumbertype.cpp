//WAP TO CHECK NUMBER IS NEGATIVE, POSITIVE, OR NEUTRAL.

#include<iostream>

using namespace std;

int main(){
    
    int number;
    
    cout << "Enter any number:";
    cin >> number;
    
    if(number<0)//cheak a number is negative 
    {
        cout << "This number is Negitive";
    }
    else if(number>0)//cheak a number is positive
    {
    cout << "This number is Positive";
    }
    else{
        cout << "this number is Neutral";
    }
    return 0;
}