// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include<iostream>
using namespace  std;

int main(){
    for(int i=5;i>=1;i--){//123
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}