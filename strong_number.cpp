// strong number finding
#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    return fact;
}
int main(){
    int n, sum=0, rem, store;
    cout<<"enter a number:";
    cin>>n;
    store= n;
    while(n!=0){
        rem= n%10;
        n=n/10;
        sum= sum + factorial(rem);
    }
    if(sum==store){
        cout<<"the number is strong number"<< endl;
    }
    else{
        cout<<"the number is not strong number"<< endl;
    }
    return 0;
}