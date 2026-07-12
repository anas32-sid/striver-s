#include <iostream>
using namespace std;
int count_numbers(int n){
    int count=0;
     if(n==0){
        return 1;
    }
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
int n;
cout<<"enter n: ";
cin>>n;
cout<<"digits of n: "<<count_numbers(n);
}
