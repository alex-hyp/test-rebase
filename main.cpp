#include <iostream>
#include <fstream>

using namespace std;


int main()
{

    cout << endl << "Test" << endl;

    ifstream F("input.txt");
    
    int x;
    
    while (!F.eof())
    {
        F >> x;
        cout << x << endl;    /* code */
    }
    
    

    return 0;
}