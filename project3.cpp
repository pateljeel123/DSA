// without a using a + or -
#include<iostream>
using namespace std;

int main(){
    
    int x=10;
    int y=20;
    
    x=x*y; //10*20=200
    y=x/y; //200/20=10
    x=x/y; // 200/10
    
    
    cout<<"x="<<x << endl<<"y="<<y;
    
    
    return 0;
}