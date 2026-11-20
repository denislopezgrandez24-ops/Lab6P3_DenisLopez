#include "Humano.h"
Humano::Humano(string nombre, int hp, int hpMax, int ataque, int defensa, int turnosV24) : Personaje(nombre, hp,hpMax, ataque,defensa){
	this->_turnosV24 = turnosV24;
}
Humano::~Humano() {

}
void Humano::atacar(Personaje& objetivo) {

}
void Humano::habilidadEspecial(Personaje& objetivo) {

}
void Humano::recibirDanio(int cantidad) {

}
void Humano::curar(int cantidad) {

}
bool Humano::estaVivo() {

}
int Humano::getTurnos() {

}
void Humano::setTurnos(int turnos) {

}
void Humano::activarV24() {

}
void Humano::pasarTurno() {

}
bool Humano::tieneV24() {

}