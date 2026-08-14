// happy number finding
#include <iostream>
using namespace std;
int main(){
    int n, rem, store, sum=0;
    cout<<" enter a number:";
    cin>>n;
    store=n;
    while(n!=1 && n!=4){
        while(n!=0){
            rem= n%10;
            n=n/10;
            sum = sum + rem*rem;
        }
        n= sum;
        sum=0;
    }
    if(n==1){
        cout<<"ther enter number is happy number"<<endl;
    }
    else{
        cout<<"the enter number is not happy number"<<endl;
    }
    return 0;
}
