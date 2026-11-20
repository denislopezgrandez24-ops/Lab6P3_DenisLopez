#pragma once
#include "Personaje.h"
class Super : public Personaje {
	char _rango;
	string _poder;
	double _multiplicador;
	int aleatorio;
	void valores();
public:
	Super(string nombre, char rango, string poder);
	~Super();
	void habilidadEspecial(Personaje& objetivo);
	string getRangoTexto();
	double getMultiplicador();

};
