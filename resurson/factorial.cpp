#include <iostream>
using namespace std;


int factorial(int n) {
	int vlaue;
	if(n==0)
	{
		return 1 ;
	} 
    return n * factorial(n - 1);
}

int main() {
    int n,result;
    cout << "Enter a number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial Is = " << result;
    cout << endl;



    return 0;
}