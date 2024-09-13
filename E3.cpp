#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout<<"introduce \n";
    int p;cin>>p;

    for(int i = 2; i < p; i++) 
    {
        bool P = true;

        for(int y = 2; y  <i; y++) 
        {
            if(i % y == 0) 
            {
                P = false; 
                break;
            }
        }

        if(P)   
        {
            cout << i << endl;
        }
    }

    return 0;
}
