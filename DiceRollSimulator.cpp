// Source(s) of logic assistance:  
// Gaddis, T. (2018). Starting out with C++: From control structures through objects. Pearson. 
//
// https://docs.microsoft.com/en-us/troubleshoot/developer/visualstudio/cpp/libraries/stl-sqrt-pow-functions
// https://docs.microsoft.com/en-us/cpp/standard-library/iomanip-functions?view=msvc-170

#include <iostream> // To use cin/cout
#include <iomanip>  // To access setw for output width
#include <cmath>    // To access power function for calculations
#include <ctime>    // Access random number generator
using namespace std;

// Constant Variable Initialization
const string TITLE = "Dice Roll Simulator";
const string AUTHOR_LINE = "By Forrest Moulin";

int main()
{
    // Seed the random number generator
// using current time
    srand(time(NULL));
    int die1, die2;
    // Random number 0 to 5, ++ (1-6)
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    int rolledNum = die1 + die2;

    cout << TITLE << endl
        << AUTHOR_LINE << endl << endl;

    cout << "Die # 1: " << die1 << endl;
    cout << "Die # 2: " << die2 << endl;
    cout << "Rolled number : " << rolledNum << endl;
}
/*
* CONSOLE OUTPUT
* Dice Roll Simulator
* By Forrest Moulin
*
* Die # 1: 2
* Die # 2: 6
* Rolled number : 8
*
* C:\Users\Forrest\cmpsc121\homework\Activity14-DiceRollSimulator\x64\Debug\Activity14-DiceRollSimulator.exe (process 29348)
* exited with code 0.
*/
