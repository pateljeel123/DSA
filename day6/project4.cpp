 // 8, 22, 8, 28, 8, ...
#include <iostream>
using namespace  std;
int main() {
    
    int start=22;
    
    for(int i=1;i<=6;i++){
        cout << "8 " << start << " ";
        start+=6;
       
    }
 
    return 0;
}