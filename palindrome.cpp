// check a number is palindrome or not
#include <iostream>
using namespace std;

int main(){
    int n, rem , rev=0 ,store;
    cout<< "Enter a number: ";
    cin>>n;
    store = n;
    while(n!=0){
        rem= n%10;
        n= n/10;
        rev= rev *10 +rem;
    }
    if(store == rev){
        cout<< "the number is palindrome"<< endl;
    }
    else{
        cout<< "the number is not palindrome"<< endl;
    }
    return 0;
}