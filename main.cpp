#include <iostream>
#include <fstream>

using namespace std;


int main()
{

    cout << endl << "Test" << endl;

    ifstream I("input.txt");
    ofstream O("ouput.txt");
    
    int x;
    
    while (!I.eof())
    {
        I >> x;
        cout << x << endl;    /* code */
        O << x << "\t"; 

    }
    
    

    return 0;
}