 // 3, 4, 7, 8, 11, 12, ...
#include <iostream>
using namespace  std;
int main() {
    
    int start=3;
    
    for(int i=1;i<=6;i++){
        cout << start << " ";
        if(i%2==0){
            start+=3;
        }
        else{
            start++;
        }
    }
 
    return 0;
}