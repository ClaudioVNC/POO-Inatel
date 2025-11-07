#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    vector<double> numeros(5);

    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        numeros[i] = (double)rand() / RAND_MAX * 100.0;
    }
    cout << "5 numeros aleatorios gerados!" << endl;

    sort(numeros.begin(), numeros.end(), greater<double>());

    cout << "\nNumeros em ordem decrescente:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << fixed << setprecision(2) << numeros[i] << endl;
    }

    return 0;
}
