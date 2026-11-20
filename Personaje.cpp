#include "Personaje.h"
Personaje::Personaje(string nombre, int hp, int hpMax, int ataque, int defensa) {
	this->_nombre = nombre;
	this->_hp = hp;
	this->_hpMax = hpMax;
	this->_ataque = ataque;
	this->_defensa = defensa;
}
Personaje::Personaje(string nombre) {
	this->_nombre = nombre;
}
Personaje::~Personaje() {

}
string Personaje::getNombre() {
	return _nombre;
}
void Personaje::setNombre(string nombre) {
	_nombre = nombre;
}
int Personaje::getHP() {
	return _hp;
}
void Personaje::setHP(int hp) {
	_hp = hp;
}
int Personaje::getHPMax() {
	return _hpMax;
}
void Personaje::setHPMax(int hpMax) {
	_hpMax = hpMax;
}
int Personaje::getAtaque() {
	return _ataque;
}
void Personaje::setAtaque(int ataque) {
	_ataque = ataque;
}
int Personaje::getDefensa() {
	return _defensa;
}
void Personaje::setDefensa(int defensa) {
	_defensa = defensa;
}