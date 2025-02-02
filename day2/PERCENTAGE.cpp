//WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE.

#include<iostream>
using namespace std;

int main(){
    
    int marks;
    
    cout << "Enter your marks :";
        cin >> marks;
        
        if(marks>=90 && marks<=100){
            cout << "your grade is A";  
        }
        else if(marks>=75 && marks<90){
            cout << "your grade is B";
        }
        else if(marks>=65 && marks<75){
            cout << "your grade is C";
        }
        else if(marks>=33 && marks<65){
            cout << "your grade is D";
        }
        else{
            cout << "you faild but don't lose hope try one more time😊";
        }
    
    
    return 0;
}