// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include<iostream>
using namespace  std;

int main(){
    for(int i=1;i<=5;i++){//123
        for(int j=5;j>=i;j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}