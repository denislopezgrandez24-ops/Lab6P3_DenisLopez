#include "Super.h"
Super::Super(string nombre, char rango, string poder) : Personaje (nombre){
	this->_rango = rango;
	this->_poder = poder;
}
Super::~Super() {

}
void Super::valores() {
	if (_rango == 'A') {
		Super::setHP(450 + (rand() + 521));
		Super::setAtaque(65 + (rand() + 78));
		Super::setDefensa(42 + (rand() + 52));
		_multiplicador = 2.0;
	}
	else if (_rango == 'B') {
		Super::setHP(230 + (rand() + 280));
		Super::setAtaque(40 + (rand() + 50));
		Super::setDefensa(26 + (rand() + 36));
		_multiplicador = 1.6;
	}
	else if (_rango == 'C') {
		Super::setHP(160 + (rand() + 210));
		Super::setAtaque(28 + (rand() + 36));
		Super::setDefensa(16 + (rand() + 24));
		_multiplicador = 1.4;
	}
	else {
		Super::setHP(110 + (rand() + 140));
		Super::setAtaque(18 + (rand() + 25));
		Super::setDefensa(8 + (rand() + 14));
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