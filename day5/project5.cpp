//    53, 53, 40, 40, 27, 27, ... 

#include <iostream>
using namespace std;

 
int main() {
    
  int first=53;
  
  for(int i=1;i<=5;i++){
      
      cout << first <<"," << first << ",";
      first-=13;
  }
      
    return 0;
}