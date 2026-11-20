#pragma once
#include "iostream"
using namespace std;
class Personaje {
	string _nombre;
	int _hp;
	int _hpMax;
	int _ataque;
	int _defensa;
public:
	void atacar(Personaje& objetivo);
	void habilidadEspecial(Personaje& objetivo);
	void recibirDanio(int cantidad);
	void curar(int cantidad);
	bool estaVivo();
	Personaje(string nombre, int hp, int hpMax, int ataque, int defensa);
	~Personaje();
	string getNombre();
	void setNombre(string nombre);
	int getHP();
	void setHP(int hp);
	int getHPMax();
	void setHPMax(int hpMax);
	int getAtaque();
	void setAtaque(int ataque);
	int getDefensa();
	void setDefensa(int defensa);
};