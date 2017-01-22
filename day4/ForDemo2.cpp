// ForDemo2 - input a loop count. Loop while
//            outputting astring arg number of times.
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
    for (int i = 1; i <= loopCount; i++)
    {
        cout << "We've finished " << i << " loops\n";
    }

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0; 
}

