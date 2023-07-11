#include <iostream>
using namespace std;
void first(int data)
{
    if (data != 100)
    {

        data++;
        second(data);
    }

    exit;
    return;
}
void second(int data)
{
    if (data % 3 == 0)
    {
        cout << "pizz"
             << " ";
    }
    else if (data % 5 == 0)
    {
        cout << "bizz"
             << " ";
    }
    else if (data % 3 == 0 && data % 5 == 0)
    {
        cout << "pizzbizz"
             << " ";
    }
    else
    {
        cout << data;
    }
    first(data);
}

int main()
{

    first(0);

    return 0;
}
/*output is
1, 2, pizza, 4, bizza, and so on............ */