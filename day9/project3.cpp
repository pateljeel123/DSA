//  wap to find sum of all element of 1D array.
#include <iostream>
using namespace std;
int main() {
    
    int n;
    int sum=0;
            
            cout << "enter a value to for a loop go=";
            cin >> n;
            
           int arr[n];
  
    for(int i=0;i<n;i++){
           cout << "enter a value a["<< i <<"]=";
          
        cin >> arr[i];
       sum+=arr[i];
        
    }
    cout<< "all data from a arr[n]=";
    for(int i=0;i<n;i++){
         
            
              cout << arr[i] << " ";
             
        
    }
    cout<< endl <<"All sum is =" << sum;

    return 0;
}