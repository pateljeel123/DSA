//wap to get and print 1D array, by user input.
#include <iostream>
using namespace std;
int main() {
    
    int n;
            
            cout << "enter a value to for a loop go=";
            cin >> n;
            
           int arr[n];
  
    for(int i=0;i<n;i++){
           cout << "enter a value a["<< i <<"]=";
        cin >> arr[i];
    }
    cout<< "all data from a arr[n]=";
    for(int i=0;i<n;i++){
        cout <<  arr[i] <<  "  ";
    }

    return 0;
}