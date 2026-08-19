// smallest number in given number
#include <iostream>
using namespace std;

int main(){
    int n, rem, min;
    cout<< "Enter a number: ";
    cin>>n;
    min = n%10;
    while(n!=0){
        rem= n%10;
        n= n/10;
        if(rem<min){
            min= rem;
        }
    }
    cout<< "Smallest digit: "<< min << endl;
    return 0;
}