#pragma once
#include "Nodo.h"

class ListaOrdenada {
	Nodo* primero;

public:
	ListaOrdenada(void);
	bool estaVacia();
	void agregar(int);
	void imprimir();
	void eliminarEn(int);
	void eliminar(int);
	Nodo* buscar(int valor);

};
