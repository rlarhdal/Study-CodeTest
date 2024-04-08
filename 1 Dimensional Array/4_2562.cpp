#include <iostream>

using namespace std;

int main()
{
    int a, num;
    int max = 0;

    for(int i = 1; i < 10; i++)
    {
        cin >> a;
        if(a > max)
        {
            max = a;
            num = i;
        }
    }

    cout << max << "\n" << num;

    return 0;
}
