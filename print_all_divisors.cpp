#include <iostream>
#include <cmath>
using namespace std;
int  divisors(int n){
for(int i=1; i<=sqrt(n); i++){
if((n%i==0)){
    cout<<i<<" ";

    if((n/i)!=i){
        cout<<(n/i)<<" ";
    }

    }
}
}
int main(){
int n;
cout<<"enter n: ";
cin>>n;
divisors(n);
}