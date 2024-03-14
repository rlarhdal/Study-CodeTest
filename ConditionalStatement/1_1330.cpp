#include <iostream>
using namespace std;

main()
{
    int a, b;
    cin >> a >> b;
    
    //삼항연산자
    cout << ((a > b) ? ">" : ((a < b) ? "<" : "=="));

    //if
    if(a>b){
        cout << ">";
    }
    else if(a<b){
        cout << "<";
    }
    else{
        cout << "==";
    }
}