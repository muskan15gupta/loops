#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int prod=1;
    while(n!=0){
        int digit=n%10;
        prod = prod*digit;
        sum+=digit;  
        n=n/10;
    }

    cout<<"The sum of the digits is "<<sum<<endl;
    cout<<"The product of the digits is "<<prod<<endl;
    cout<<"The difference of both is "<<prod-sum<<endl;
}