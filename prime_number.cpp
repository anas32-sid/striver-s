#include <iostream>
using namespace std;
void prime_number(int n){
    int count=0;
for(int i=1; i<=n; i++){
   
    if(n%i == 0){
        count++;
    if(n%n==1){
        count++;
    }
    }
}
if(count==2){
    cout<<"Prime";
   }
   else{
    cout<<"NOT";
   }
}
int main(){
int n;
cout<<"enter n: ";
cin>>n;
prime_number(n);
}
