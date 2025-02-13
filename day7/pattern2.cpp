//1
// 21
// 321
// 4321
// 54321

#include<iostream>
using namespace  std;

int main(){
    for(int i=1;i<=5;i++){//12345
        for(int j=i;j>=1;j--){//1 1>1 2>1 
            cout << j;
        }
        cout << endl;
    }
    return 0;
}