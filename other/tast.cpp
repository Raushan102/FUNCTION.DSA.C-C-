#include <iostream>
using namespace std;
int sum(int a, int b);

int subtract(int a, int b);

int main()
{
    int a, b;
    cout << "enter two number";
    cin >> a >> b;
    sum(a, b);
    cout <<"add is"<< a + b << '\n';
    subtract(a,b);
   cout<<"subtract is"<<a-b<<'\n';

    return 0;
}
int sum(int a, int b)
{
    return a + b;
    return a - b;
}
int subtract(int a,int b){
    return a-b;
}