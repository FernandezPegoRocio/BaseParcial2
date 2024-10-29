#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
#include <list>
#include "Cliente.hpp"
#include "Articulo.hpp"
using namespace std;

class Pedido {
private:
    string codigo;
    Cliente* cliente;
    list<Articulo*> listaArticulos;

public:
    Pedido(string codigo, Cliente* cliente);
    void agregarArticulo(Articulo* articulo);
    void mostrar();
    ~Pedido();
};

#endif
