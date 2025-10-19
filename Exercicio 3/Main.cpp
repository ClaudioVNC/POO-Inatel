#include "BrownieCafe.h"
#include "BrownieNutella.h"
#include "BrownieDoceDeLeite.h"
#include "Comprador.h"

int main()
{

    BrownieCafe bwCafe("Brownie Expresso", 12.50, "Cafe Expresso");
    BrownieNutella bwNutella("Brownie Cremoso", 18.90, "Nutella Premium");
    BrownieDoceDeLeite bwDoceLeite("Brownie Tradicional", 14.00, "Doce de leite caseiro");

    Comprador comprador("Carlos Silva", 100.00);

    cout << "Bem-vindo a Brownie Store" << endl;
    cout << "Cliente: " << comprador.getNome() << endl;
    cout << "Saldo inicial: R$ " << comprador.getSaldo() << endl;

    comprador.efetuarCompra(&bwCafe);
    comprador.efetuarCompra(&bwNutella);
    comprador.efetuarCompra(&bwDoceLeite);

    cout << endl;
    cout << "Compra finalizada" << endl;
    cout << "Saldo final: R$ " << comprador.getSaldo() << endl;

    return 0;
}
