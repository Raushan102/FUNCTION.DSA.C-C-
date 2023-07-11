#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int power,n,a;
    cout<<"enter  n";
    cin>>n;
    cout<<"enter a";
    cin>>a;
    power=pow(n,a);
    int c=2%8;
    int c2=2/8;
    cout<<"c is"<<c;
    cout<<"c2 is"<<c2;
    cout<<a<<"power of"<<n<<"is"<<power<<'\n';
    return 0;
}
