// automorphic number
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
int powof10(int n, int p){
    int pow = 1;
    for(int i=0; i<p; i++){
        pow = pow * n;
    }
    return pow;
}
int main(){
    int n, sq, rem, digits, power;
    cout<<"enter a number:";
    cin>>n;
    sq= n*n;
    digits= countdigits(n);
    power= powof10(10, digits);
    rem= sq%power;
    if(rem==n){
        cout<<"the enter number is automorphic number"<<endl;
    }
    else{
        cout<<"the enter number is not automorphic number"<<endl;
    }
    return 0;
}