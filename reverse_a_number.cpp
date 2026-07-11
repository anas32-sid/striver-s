#include <iostream>
using namespace std;
int reverse_number(int n){
    int lastdigit=0;
    int reverse=0;
    while(n>0){
        lastdigit=n%10;
        reverse=(reverse*10)+lastdigit;
        n=n/10;
    }
    return reverse;
}
int main(){
int n;
cout<<"enter n: ";
cin>>n;
cout<<"revse n is: "<<reverse_number(n);
}
 