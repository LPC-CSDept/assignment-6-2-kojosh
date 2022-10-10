//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
    int nthPow = 1;
        // return n_th power number
        int num = n;
        // For loop to get nthPow
        for ( int i = 0; i < num; i++ ) {
            nthPow *= 2;
        }
        return nthPow;
}

double nthpowern(int n)
{
    double iversePow;
    int nthPow = 1;
        // return n_th power number
        int num = n * -1;
        // For loop to get nthPow
        for ( int i = 0; i < num; i++ ) {
            nthPow *= 2;
        }
        double inversePow = 1.0 / nthPow;
        return inversePow;
}

void printout(double result)
{
        
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
