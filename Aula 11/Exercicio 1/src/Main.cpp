#include "../include/Cachorro.h"
#include "../include/Lontra.h"
#include "../include/Boi.h"
#include "../include/Aquatico.h"

#include <vector>

int main()
{
    Cachorro cachorro("Rex", 99.0);
    Lontra lontra("Lola", 80.0);
    Boi boi("Julio cocielo", 180.0);

    cout << "Teste direto" << endl;
    cachorro.emitirSom();
    lontra.emitirSom();
    boi.emitirSom();

    cout << endl << "Teste via ponteiros da classe base" << endl;
    Mamifero *mamif[3];
    mamif[0] = &cachorro;
    mamif[1] = &lontra;
    mamif[2] = &boi;

    for (int i = 0; i < 3; ++i)
    {
        mamif[i]->mostraInfo();
        mamif[i]->emitirSom();
        cout << endl;
    }

    cout << "Teste da interface Aquatico" << endl;
    Aquatico *aquatico = &lontra;
    aquatico->nadar();

    return 0;
}
