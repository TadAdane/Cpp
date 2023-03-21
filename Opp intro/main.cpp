/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "opp_1.hpp"

using namespace std;

int main()
{
    tad::Cube c;
    c.setlength(5);
    int volume = c.getvolume();
    int area = c.getsurfacearea();
    
    cout << area << " " << volume;

    return 0;
}
