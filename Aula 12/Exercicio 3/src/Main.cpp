#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    int num = 100000;
    long tInicial, tFinal;

    vector<int> list;
    unordered_set<int> conjunto;
    unordered_map<int, int> mapa;

    tInicial = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    for (int i = 0; i < num; i++)
    {
        list.push_back(i);
    }
    tFinal = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << "Tempo para inserir na List: " << (tFinal - tInicial) << "ms" << endl;

    tInicial = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    for (int i = 0; i < num; i++)
    {
        conjunto.insert(i);
    }
    tFinal = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << "Tempo para inserir no Set: " << (tFinal - tInicial) << "ms" << endl;

    tInicial = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    for (int i = 0; i < num; i++)
    {
        mapa[i] = i;
    }
    tFinal = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << "Tempo para inserir no Map: " << (tFinal - tInicial) << "ms" << endl;

    tInicial = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    for (int i = 0; i < num; i++)
    {
        find(list.begin(), list.end(), i);
    }
    tFinal = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << "Tempo para buscar na List: " << (tFinal - tInicial) << "ms" << endl;

    tInicial = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    for (int i = 0; i < num; i++)
    {
        conjunto.find(i);
    }
    tFinal = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << "Tempo para buscar no Set: " << (tFinal - tInicial) << "ms" << endl;

    tInicial = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    for (int i = 0; i < num; i++)
    {
        mapa.find(i);
    }
    tFinal = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << "Tempo para buscar no Map: " << (tFinal - tInicial) << "ms" << endl;

    // Ficou bem parecido com o seu mas acho que nao tem como fujir muito disso
    return 0;
}
