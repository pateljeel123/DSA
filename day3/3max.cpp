#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    
    cout << "Enter  value a:";
    cin >> a;
    
    cout << "Enter  value b:";
    cin >> b;
    
    cout << "Enter  value c:";
    cin >> c;
    
    if(a>b){
        if(b>a){
            cout << "b is max";
        }
        else{
            cout << "a is max";
        }
    }
    else{
        if(b>c){
            cout << "b is max";
        }
        else{
            cout << "c is max";
        }
    }
    return 0;
}