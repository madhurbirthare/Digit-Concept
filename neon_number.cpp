// neon number is a number where the sum of digits of square of the number is equal to the number itself.
#include <iostream>
using namespace std;
int main(){
    int n, rem, store, sum=0;
    cout<<" enter a number:";
    cin>>n;
    store =n;
    n= n*n;
    while(n!=0){
        rem= n%10;
        n=n/10;
        sum= sum + rem;
    }
    if(store==sum){
        cout<<"the enter number is neon number"<<endl;
    }
    else{
        cout<<"the enter number is not neon number"<<endl;
    }
    return 0;
}