// sum of digits of given number
#include <iostream>
using namespace std;

int main() {
    int n, rem, sum=0;
    cout<< "Enter a number: ";
    cin>>n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum= sum +rem;
    }
    cout<< "Sum of digits: "<< sum << endl;
    return 0;
}