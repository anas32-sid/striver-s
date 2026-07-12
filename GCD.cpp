#include <iostream>
using namespace std;
void GCD(int n1, int n2){
int GCD = 1;

for (int i = 1; i <= min(n1, n2); i++) {
    if (n1 % i == 0 && n2 % i == 0) {
        GCD = i;
    }
}
cout << GCD;
}
int main(){
int n1;
cout<<"enter first number: ";
cin>>n1;

int n2;
cout<<"enter second number: ";
cin>>n2;
GCD(n1, n2);
}