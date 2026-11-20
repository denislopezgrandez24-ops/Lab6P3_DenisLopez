#pragma once
#include "Personaje.h"
class Super : public Personaje {
	char _rango;
	string _poder;
	double multiplicador;
	void valores();
public:
	Super(string nombre, char rango, string poder);
	~Super();
	void habilidadEspecial(Personaje& objetivo);
	string getRangoTexto();
};
