//wap to find sum of 1 to user passed number using udf.


#include <iostream>
using namespace std;

int findSum(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int num;
    cin >> num;
    cout << findSum(num);
}
