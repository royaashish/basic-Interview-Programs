#include <iostream>
using namespace std;
int main() {
    int n, i, flag = 0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    for (i = 2; i < n ; ++i) {
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        cout<<"1 is neither prime nor composite.";
    }
    else {
        if (flag == 0)
            cout<<n<<" is prime number";
        else
            cout<<n<<" is not a prime number.";
    }
    return 0;
}
