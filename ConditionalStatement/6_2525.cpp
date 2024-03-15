#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    cin >> c;

    int min = ((60 * a + b) + c) % 60;
    int hour = (((60 * a + b) + c) / 60) % 24;
    
    cout << hour << " " << min;

    return 0;

    //if문으로도 가능한대, 걍 저렇게 하는 듯
}