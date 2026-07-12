#include <iostream>
using namespace std;
void armstrong(int n){
    int temp=n;
    int sum=0;
while(n>0){
    int digit=n%10;
    sum=sum+(digit*digit*digit);
    n=n/10;
}
if(sum==temp){
    cout<<"armstrong";
}
else{
    cout<<"NOT";
}
}
int main(){
int n;
cout<<"enter n: ";
cin>>n;
armstrong(n);
}
