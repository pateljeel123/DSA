//without 3rd variable

#include <iostream>
using namespace std;

int main(){
    
    int x=10;
    int y=20;
    
    x=x+y; // 10+20=30
    y=x-y;//30-20=10
    x=x-y; // 30-10=20
    
    
    cout << "x="<<x <<endl << "y="<<y;
   
    return 0;
}