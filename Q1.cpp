#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    int prod = 1;
    int sum = 0;
    int digit=0;

    while(n!=0){
        digit = n%10;
        sum +=digit;
        prod *=digit;
        n=n/10;
    }

    cout<<prod - sum;
}