// sort the digits of a number in ascending order
#include <iostream>
using namespace std;

int main(){
    int n, size=0, arr[10], temp, rem;
    cout<<"enter a number:";
    cin>>n;
    while(n!=0){
        rem= n%10;
        arr[size]=rem;
        size++;
        n= n/10;
    }
    for(int i=0; i<size -1; i++){
        for(int j=0; j<size -i-1; j++){
            if(arr[j]>arr[j+1]){
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    cout<<"the number after sorting the digits in ascending order is:";
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    return 0;
}