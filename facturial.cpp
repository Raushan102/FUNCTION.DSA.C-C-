#include <iostream>
using namespace std;
void fact();
int main()
{
   fact();
    return 0;
}

void fact()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    


    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factis" << fact;

    return;
}