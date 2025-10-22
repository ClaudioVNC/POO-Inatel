#include "../include/BrownieCafe.h"
#include "../include/BrownieNutella.h"
#include "../include/BrownieDoceDeLeite.h"

int main()
{

    BrownieCafe bwCafe("Brownie Expresso", 12.50, "Cafe Expresso");
    BrownieNutella bwNutella("Brownie Cremoso", 18.90, "Nutella Premium");
    BrownieDoceDeLeite bwDoceLeite("Brownie Tradicional", 14.00, "Doce de leite caseiro");

    bwNutella.adicionaNutella();
    bwCafe.adicionaCafe();
    bwDoceLeite.adicionaDoceDeLeite();
    cout << endl;

    bwCafe.mostraInfo();
    bwDoceLeite.mostraInfo();
    bwNutella.mostraInfo();
    cout << endl;

    bwNutella.addCarrinhoDeCompras();
    bwNutella.calculaValorTotalCompra();
    bwCafe.calculaValorTotalCompra();
    bwDoceLeite.calculaValorTotalCompra();

    return 0;
}
