/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Swap multiple numbers without any temp variable" << endl;
    
    int w = 1;
    int wOld = w;
    int x = 2;
    int xOld = x;
    int y = 3;
    int yOld = y;
    int z = 4;
    int zOld = z;
    
    //Using temp variable
    //int temp;
    //temp = w;
    //w = x;
    //x = y;
    //y = z;
    //z = temp;
    
    //Using arithmatic solutions
    //Steps: 
    //a. find total of all number
    w = w + x + y + z;
    //b. find new value for last variable first then go respectively, resulted of 
    //total minus (total of first variable)
    z = w - (x+y+z);
    y = w - (x+y+z);
    x = w - (x+y+z);
    w = w - (x+y+z);
    //some issues might be found in this solution, if we swap very large number 
    //it might be produce variable overflow error
    printf("w from %d to %d\n, x from %d to %d\n, y from %d to %d\n, z from %d to %d\n", wOld, w, xOld, x, yOld, y, zOld, z);
    return 0;
}
