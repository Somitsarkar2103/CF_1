#include<iostream>
using namespace std;

int fib(int n) {
    if(n <= 1)
        return n;       // base case

    return fib(n-1) + fib(n-2);   // recursive calls
}

int main() {
    int n;
    cout<<"Enter Number Of Terms: ";
    cin>>n;

    cout<<"Fibonicci Series: ";
        for(int i = 0; i < n; i++)
        cout << fib(i) << "  ";

    return 0;
}
