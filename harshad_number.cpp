// harsad number is a number which is divisible by the sum of its digits.
// For example, 18 is a harshad number because 1 + 8 = 9 and 18 is divisible by 9.
 #include <iostream>
using namespace std;

int main(){
   int n, sum=0, rem, temp;
    cout<<"enter a number:";
    cin>>n;         
    temp=n;
    while(n!=0){
        rem= n%10;    
        sum= sum+rem; 
        n=n/10;       
    }
    if(temp%sum==0){
        cout<<"the enter number is harshad number"<<endl;
    }
    else{
        cout<<"the enter number is not harshad number"<<endl;
    }
 
}