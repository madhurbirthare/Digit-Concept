//duck number  
#include <iostream>
using namespace std;
int main(){
    int n, rem;
    bool isDuck= false;
    cout<<" enter a number:";
    cin>>n;
    while(n!=0){
        rem= n%10;
        if(rem==0){
            isDuck= true;
            break;
        }
    }
    if(isDuck){
        cout<<"the enter number is duck number"<<endl;
    }
    else{
        cout<<"the enter number is not duck number"<<endl;
    }
    return 0;
}