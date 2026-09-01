#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;

int hash[26] = {0};
for(int i=0; i<s.size(); i++){
    hash[s[i]-'a']++;
}
//queries
int q;
cout<<"enter number of queries: ";
cin >> q;
while(q--) {
    char c;
    cout<<"enter character u wana find: ";
    cin >> c;
    cout<<hash[c-'a']<<endl;
}
}
