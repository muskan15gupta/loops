#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int value=0;
        while(j<=n){
            char ch ='A'+ value;
            cout<<ch;
            j++;
            value++;
        }
        cout<<endl;
        i++;
    }
}