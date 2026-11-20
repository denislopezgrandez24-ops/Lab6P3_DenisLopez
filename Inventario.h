#pragma once
#include "iostream"
#include <vector>
#include <string>
using namespace std;
template<class T>
class Inventario {
	vector<T>elementos;
public:
	void agregar(T item) {
		elementos.push_back(item);
	}
	T extraer(int indice) {
		elementos.erase(elementos.begin() + indice);
	}
	T obtener(int indice) {
		elementos.at(indice);
	}
	int cantidad() {
		return elementos.size();
	}
	bool estaVacio() {
		return elementos.empty();
	}
};