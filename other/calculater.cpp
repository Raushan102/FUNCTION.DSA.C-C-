#include <iostream>
using namespace std;

int main()
{

  int a, b;char n;
cout<<"enter first number";
cin>>a;
  cout << "enter operater number";
  cin >> n;
  cout << "enter second number";
  cin >> b;
  

  switch (n)
  {
  case '+':
   cout << a<<"+"<<b<<"="<<a+b;
    break;
  case '*':
    cout << a<<"*"<<b<<"="<<a*b;
    break;
  case '-':
    cout << a<<"-"<<b<<"="<<a-b;
    break;
  case '/':
   cout << a<<"/"<<b<<"="<<a/b;
  }
  return 0;
}