// remove the last digit of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter  a number:";
    cin>>n;
    n= n/10;
    cout<<"the number after removing the last digit is:"<<n<<endl;
    return 0;
}