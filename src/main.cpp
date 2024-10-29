#include <iostream>
#include "../include/Articulo.hpp"
#include "../include/Cliente.hpp"
#include "../include/Pedido.hpp"

int main() {
    Articulo* articulo1 = new Articulo("A001", "Protector Solar", 42.99);
    Articulo* articulo2 = new Articulo("A002", "Lápiz labial", 25.80);
    Articulo* articulo3 = new Articulo("A003", "Jabon natural hipoalergenico", 11.99);

    Cliente* cliente1 = new Cliente("C001", "Lola Mento", "681 Calle Dolores");
    Pedido* pedidoCliente1 = new Pedido("P001", cliente1);

    pedidoCliente1->agregarArticulo(articulo1);
    pedidoCliente1->agregarArticulo(articulo2);

    pedidoCliente1->mostrar();

    delete articulo1;
    delete articulo2;
    delete articulo3;
    delete cliente1;
    delete pedidoCliente1;
 
    system("pause");
    return 0;
}