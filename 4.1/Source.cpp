#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i; // N - верхня межа суми, i - лічильник циклу
    double S; // результат обчислення суми

    cout << "N = "; cin >> N;

    // Спосіб 1: while
    S = 0;
    i = 1;
    while (i <= N)
    {
        S += (1.0 + 1.0 * i / N) / (1.0 * i * i);
        i++;
    }
    cout << "1) S = " << S << endl;

    // Спосіб 2: do ... while
    S = 0;
    i = 1;
    do {
        S += (1.0 + 1.0 * i / N) / (1.0 * i * i);
        i++;
    } while (i <= N);
    cout << "2) S = " << S << endl;

    // Спосіб 3: цикл for з інкрементом (i++) 
    S = 0;
    for (i = 1; i <= N; i++)
    {
        S += (1.0 + 1.0 * i / N) / (1.0 * i * i);
    }
    cout << "3) S = " << S << endl;

    // Спосіб 4: цикл for з декрементом (i--)
    S = 0;
    for (i = N; i >= 1; i--)
    {
        S += (1.0 + 1.0 * i / N) / (1.0 * i * i);
    }
    cout << "4) S = " << S << endl;

    return 0;
}