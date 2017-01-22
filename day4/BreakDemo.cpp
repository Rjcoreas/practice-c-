// BreakDemo - input a series of numbers.
//             Continue to accumulate the sum
//             of these numbers until the user
//             enters a negative number.
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // input the loop count
    int accumulator = 0;
    cout << "This program sums values entered"
         << "by the user\n";
    cout << "Terminate the loop by entering "
         << "a negative number\n";

    // loop "forever"
    for(;;)
    {
        // fetch another number
        int value = 0;
        cout << "Enter next number: ";
        cin  >> value;

        // if it's negative...
        if (value < 0)
        {
            // ...then exit
            break;
        }

        // ...otherwise add the number to the
        // accumulator
        accumulator = accumulator + value;
    }

    // now that we've exited the loop
    // output the accumulated result
    cout << "\nThe total is " 
         << accumulator 
         << "\n";

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    system("PAUSE");
    return 0; 
}
