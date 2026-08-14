//frequency of_number
#include <iostream>
using namespace std;
int main(){
    long n, rem, count=0, store;
    cout<< "Enter a number: ";
    cin>>n;
    store= n;
    cout<< "Enter a digit to find frequency: ";
    cin>>rem;
    while(n!=0){
        if(n%10==rem){
            count++;
        }
        n= n/10;
    }
    cout<< "Frequency of "<< rem << " in "<< store << " is: "<< count << endl;
    return 0;
}