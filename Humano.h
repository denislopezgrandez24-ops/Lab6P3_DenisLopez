#pragma once
#include "Personaje.h"
class Humano : public Personaje {
	int turnosV24;
public:
	void atacar(Personaje& objetivo) override;
	void habilidadEspecial(Personaje& objetivo) override;
	void recibirDanio(int cantidad) override;
	void curar(int cantidad) override;
	bool estaVivo() override;
};