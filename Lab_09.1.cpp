#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx  = "; cin >> dx;
    cout << "e   = "; cin >> e;
    cout << endl;

    // заголовок і шапка таблиці
    cout << "Rjad Teilora dlja funkcii ln(x)" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "|" << setw(8) << "x"
        << "|" << setw(14) << "ln(x)"
        << "|" << setw(14) << "S"
        << "|" << setw(16) << "k-st dodankiv" << "|" << endl;
    cout << "-----------------------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum();                          // виклик процедури обчислення суми

        cout << "|" << setw(8) << fixed << setprecision(3) << x
            << "|" << setw(14) << setprecision(6) << log(x)
            << "|" << setw(14) << setprecision(6) << s
            << "|" << setw(16) << n + 1 << "|" << endl;

        x += dx;
    }
    cout << "-----------------------------------------------------------" << endl;

    cin.get();
    cin.get();
    return 0;
}
