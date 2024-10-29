#include "../include/Pedido.hpp"
#include <iostream>
using namespace std;

Pedido::Pedido(string codigo, Cliente* cliente)
    : codigo(codigo), cliente(cliente) {}

void Pedido::agregarArticulo(Articulo* articulo) {
    listaArticulos.push_back(articulo);
}

void Pedido::mostrar() {
    cout << "Cliente: " << cliente->obtenerNombre() << endl;
    for (auto articulo : listaArticulos) {
        cout << "Código del Artículo: " << articulo->obtenerCodigo() << endl;
        cout << "Nombre del Artículo: " << articulo->obtenerNombre() << endl;
        cout << endl;
    }
}

Pedido::~Pedido() {
    
}
