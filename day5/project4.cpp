//    22, 21, 23, 22, 24, 23, ...

#include <iostream>
using namespace std;

// +1 +2
int main() {
    
    int first=22;
    
    for(int i=1;i<=20;i++){
         cout << first << " ";
        if(i%2==1)
        {
           first--;
        }
        else{
            first+=2;
        }
    }
   
       
      
    return 0;
}