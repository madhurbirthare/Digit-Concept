// largest_number_in_given_number
#include <iostream>
using namespace std;

int main(){
    int n, rem, max;
    cout<< "Enter a number: ";
    cin>>n;
    max = n%10;
    while(n!=0){
        rem= n%10;
        n= n/10;
        if(rem>max){
            max= rem;
        }
    }
    cout<< "Largest digit: "<< max << endl;
    return 0;
}