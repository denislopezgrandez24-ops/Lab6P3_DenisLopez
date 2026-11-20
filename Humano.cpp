#include "Humano.h"
Humano::Humano(string nombre, int hp, int hpMax, int ataque, int defensa) : Personaje(nombre, hp,hpMax, ataque,defensa){

}
Humano::~Humano() {

}
void Humano::atacar(Personaje& objetivo) {
	if (tieneV24()) {
		int salud = objetivo.getHP();
		int ataque = salud - (Humano::getAtaque()+40);
		objetivo.setHP(ataque);
	}
	else {
		int salud = objetivo.getHP();
		int ataque = salud - Humano::getAtaque();
		objetivo.setHP(ataque);
	}
}
void Humano::habilidadEspecial(Personaje& objetivo) {
	if (tieneV24()) {
		int ataque = (Humano::getAtaque() + 40) * 2;
		objetivo.setHP(ataque);
	}
	else {
		int ataque = (Humano::getDefensa() /2) +15;
		objetivo.setHP(ataque);
	}
}
void Humano::recibirDanio(int cantidad) {
	int danio = cantidad - (Humano::getDefensa()/2);
	Humano::setHP(danio);
	if (Humano::getHP() == 0) {
		Humano::setHP(0);
	}
}
void Humano::curar(int cantidad) {
	if (Humano::getHP() < Humano::getHPMax()){
		int curar = Humano::getHP();
		Humano::setDefensa(curar + cantidad);
	}
}
bool Humano::estaVivo() {
	if (Humano::getHP()>0) {
		return true;
	}
	else {
		return false;
	}
}
int Humano::getTurnos() {
	return _turnosV24;
}
void Humano::setTurnos(int turnos) {
	_turnosV24 = turnos;
}
void Humano::activarV24() {
	_turnosV24 = 3;
}
void Humano::pasarTurno() {
	if (tieneV24()) {
		_turnosV24--;
	}
	if (_turnosV24 < 0) {
		_turnosV24 = 0;
	}
}
bool Humano::tieneV24() {
	return true;
}