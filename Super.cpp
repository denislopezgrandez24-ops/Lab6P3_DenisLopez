#include "Super.h"
Super::Super(string nombre, char rango, string poder) : Personaje (nombre){
	this->_rango = rango;
	this->_poder = poder;
}
Super::~Super() {

}
void Super::valores() {
	if (_rango == 'A') {
		Super::setHP(450 + (rand() % 71));
		Super::setAtaque(65 + (rand() % 14));
		Super::setDefensa(42 + (rand() % 11));
		_multiplicador = 2.0;
	}
	else if (_rango == 'B') {
		Super::setHP(230 + (rand() % 51));
		Super::setAtaque(40 + (rand() % 11));
		Super::setDefensa(26 + (rand() % 11));
		_multiplicador = 1.6;
	}
	else if (_rango == 'C') {
		Super::setHP(160 + (rand() % 51));
		Super::setAtaque(28 + (rand() % 9));
		Super::setDefensa(16 + (rand() % 9));
		_multiplicador = 1.4;
	}
	else {
		Super::setHP(110 + (rand() % 31));
		Super::setAtaque(18 + (rand() % 8));
		Super::setDefensa(8 + (rand() % 7));
		_multiplicador = 1.2;
	}
}
void Super::habilidadEspecial(Personaje& objetivo) {
	int danio = Super::getAtaque() * Super::getMultiplicador();
	objetivo.setHP(danio);
}
string Super::getRangoTexto() {
	string texto = "";
	if (_rango == 'A') {
		texto = "Alpha";
	}
	else if (_rango == 'B') {
		texto = "Beta";
	}
	else if (_rango == 'C') {
		texto = "Omega";
	}
	else {
		texto = "Gamma";
	}
	return texto;
}
double Super::getMultiplicador() {
	return _multiplicador;
}