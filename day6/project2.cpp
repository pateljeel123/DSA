 // 58, 52, 46, 40, 34, ...
#include <iostream>
using namespace  std;
int main() {
    
 int start=58;
 
 for(int i=1;i<=5;i++){
     cout << start << " ";
     start-=6;
 }
 
    return 0;
}