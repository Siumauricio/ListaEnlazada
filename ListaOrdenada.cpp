#include "ListaOrdenada.h"
#include <iostream>
ListaOrdenada::ListaOrdenada(void):primero(nullptr){}

bool ListaOrdenada::estaVacia() {
	return primero == nullptr;
}

void ListaOrdenada::agregar(int valor) {
	Nodo* nuevo = new Nodo(valor, nullptr);

	if (estaVacia())
	{
		primero = nuevo;

	}
	else 
	{
		primero->setSiguiente(nuevo);
		nuevo->setSiguiente(nuevo);
		
	}

}
void ListaOrdenada::imprimir() {
	Nodo* actual = primero;
		while (actual!=nullptr)
		{
			std::cout << "[" << actual->getValor() << "]";
			actual = actual ->getSiguiente();
		}
}
