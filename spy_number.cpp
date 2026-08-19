//spy number cheking
#include <iostream>
using namespace std;
 int main (){
    int n , rem, sum=0, product=1, store;
    cout<<"enter a number";
    cin>>n;
    store= n;
    while(n!=0){
        rem= n%10;
        n=n/10;
        sum= sum+rem;
        product= product*rem;
    }
    if(sum==product){
        cout<<"the number is a spy number"<< endl;
    }
    else{
        cout<<"the number is not a spy number"<< endl;
    }
    return 0;
 }