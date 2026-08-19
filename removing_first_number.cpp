// remove the first digit of a number
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
    int n, digits, power;
    cout<<"enter the number:";
    cin>>n;
    digits= countdigits(n);
    power= powof10(10, digits-1);
    n= n%power;
    cout<<"the number after removing the first digit is:"<<n<<endl;
    return 0;
}

