#include<iostream>
using namespace std;

int main(){
    
    int number=5;
    int plus=0;
    for(int i=1;i<=number;i++){
        cout << plus+i << endl;
        plus+=i;
    }
    
    return 0;
}