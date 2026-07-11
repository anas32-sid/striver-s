#include <iostream>
using namespace std;
void count_numbers(int n){
int temp=n;
    int lastdigit=0;
    int reverse=0;
    while(n>0){
        lastdigit=n%10;
        reverse=(reverse*10)+lastdigit;
        n=n/10;
    }
    if(reverse==temp){
        cout<<"palindrome";
    }
    else{
        "NOT";
    }
}
int main(){
int n;
cout<<"enter n: ";
cin>>n;
count_numbers(n);
}
