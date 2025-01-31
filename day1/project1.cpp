//using a third variable

#include <iostream>
using  namespace std;


int main() {
    int x=10;
    int y=20;
    int store=x;
    
    x=y ;//x=20
    y=store; //y=10
  
        cout <<"x ="<< x <<endl <<  "y ="<< y;

    return 0;
}