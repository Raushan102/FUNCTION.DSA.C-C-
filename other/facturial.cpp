#include<iostream>
using namespace std;

int main() {
    unsigned int n;
    unsigned int fact=1;
int i;
cout<<"enter  n";
cin>>n;
    for(i=n;i>0;i--)
    {
        fact *=i;

        cout<<"\n"<<fact;
    }

    return 0;
}