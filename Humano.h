#pragma once
#include "Personaje.h"
class Humano : public Personaje {
	int _turnosV24;
public:
	void atacar(Personaje& objetivo);
	void habilidadEspecial(Personaje& objetivo);
	void recibirDanio(int cantidad);
	void curar(int cantidad);
	bool estaVivo();
	void activarV24();
	void pasarTurno();
	bool tieneV24();
	Humano(string nombre, int hp, int hpMax, int ataque, int defensa, int turnosV24);
	~Humano();
	int getTurnos();
	void setTurnos(int turnos);
};