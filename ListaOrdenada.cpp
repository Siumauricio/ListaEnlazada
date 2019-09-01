#include "ListaOrdenada.h"
#include "pch.h"
#include <iostream>
using namespace std;
 ListaOrdenada::ListaOrdenada(void) :primero(nullptr) {}

bool ListaOrdenada::estaVacia() {
	return primero == nullptr;
}

void ListaOrdenada::agregar(int valor) {
	Nodo* nuevo = new Nodo(valor, nullptr);
	Nodo* mayor = nullptr;
	Nodo *menor = nullptr;
	if (estaVacia())
	{
		primero = nuevo;
	}
	else
	{
			nuevo->setSiguiente(primero);
			primero = nuevo;
		}
	}


void ListaOrdenada::imprimir() {
	Nodo* actual = primero;
	while (actual != nullptr)
	{
		std::cout << "[" << actual->getValor() << "]";
		actual = actual->getSiguiente();
	}
}
void ListaOrdenada::eliminar(int valor) {
	Nodo* anterior = nullptr;
	Nodo* actual = primero;
	if (estaVacia())
		return;
	else
	{
		while (actual != nullptr)
		{
			if (valor == actual->getValor())
			{
				if (actual == primero)
				{
					primero = actual->getSiguiente();
					delete actual;
				}
				else if (actual == nullptr) {
					actual = anterior;
					actual->setSiguiente(nullptr);
					delete actual;
				}
				else
				{
					anterior->setSiguiente(actual->getSiguiente());
					delete actual;
				}
				return;
			}
		}
		anterior = actual;
		actual = actual->getSiguiente();

	}
	}

void ListaOrdenada::eliminarEn(int posicion) {
	int cantidad = 0;
	int verificar = 0;
	Nodo *actual = primero;
	Nodo* actual2 = nullptr;
	if (estaVacia())
	{
		cout << "La Lista Esta Vacia";
		return;
	}
	while (actual!=nullptr)
	{
		cantidad++;
		actual = actual->getSiguiente();
	}
	if (posicion>cantidad)
	{
		cout << "Lo Siento la Posicion no Existe" << endl;
	}
	actual = primero;
	while (actual!=nullptr)
	{

		if (verificar==posicion)
		{
			actual->setSiguiente(primero);
			cout << "si existe";
			delete actual2;
		}
		
		actual2 = actual2->getSiguiente();
		verificar++;
	}

}
Nodo *ListaOrdenada::buscar(int valor) {
	Nodo *actual = primero;
	while (actual!=nullptr)
	{
		if (actual->getValor()==valor)
		{
			cout << "Se Encontrol el Nodo " << valor << endl;
			return primero;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}
