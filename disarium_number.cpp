// disarium number is a number in which the sum of its digits powered with
// their respective positions is equal to the number itself.
// For example, 135 is a disarium number because 1^1 + 3^2 + 5^3 = 135.

#include <iostream>
using namespace std;
int countdigits(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int power(int n, int p){
    int pow = 1;
    for(int i=0; i<p; i++){
        pow = pow * n;
    }
    return pow;
}
int main(){
    int n, digits, temp, rem, sum=0;
    cout<<"enter a number:";
    cin>>n;
    temp=n;
    digits= countdigits(n);
    while(n!=0){
        rem= n%10;
        n=n/10;
        sum= sum+ power(rem, digits);
        digits--;
    }
    if(sum==temp){
        cout<<"the enter number is disarium number"<<endl;
    }
    else{
        cout<<"the enter number is not disarium number"<<endl;
    }
    return 0;
}