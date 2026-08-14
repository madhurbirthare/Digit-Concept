// armstrong_number
#include <iostream>
using namespace std;

int countdigit(int n){
    int count =0;
    while (n!=0){
        n= n/10;
        count++;
    }
    return count;
}
int power(int n, int p){
    int pow=1;
    for(int i=0; i<p; i++){
        pow= pow*n;
    }
    return pow;
}
int main(){
    int n, rem, sum=0, store;
    cout<< "Enter a number: ";
    cin>>n;
    store= n;
    int count= countdigit(n);
    while(n!=0){
        rem= n%10;
        n= n/10;
        sum= sum + power(rem, count);
    }
if(store==sum){
    cout<< "the number is armstrong number"<< endl;
}
else{
    cout<< "the number is not armstrong number"<< endl;
}
return 0;
}