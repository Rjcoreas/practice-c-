// ForDemo1 - input a loop count. Loop while
//           outputting astring arg number of times.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // input the loop count
    int loopCount;
    cout << "Enter loopCount: ";
    cin  >> loopCount;

    // count up to the loop count limit
    for (; loopCount > 0;)
    {
        loopCount = loopCount - 1;
        cout << "Only " << loopCount << " loops to go\n";
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0; 
}

