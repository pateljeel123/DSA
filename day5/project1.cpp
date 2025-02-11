//   2, 1, (1/2), (1/4), ...

#include <iostream>
using namespace std;

int main() {
       
       int number=2;
       cout << number << " ";
        number/=2;
       cout << number << " ";
      
       
       for(int i=1; i<=10;i++){
           
           cout << "1/" << number << " ";
          number*=2;
       }

    return 0;
}