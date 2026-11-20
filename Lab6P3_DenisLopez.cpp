#include "Inventario.h"
#include "Personaje.h"
#include "Humano.h"
#include "Super.h"
#include <iostream>
using namespace std;
vector <Humano*>humanos;//primer vector
vector <Super*>supers;//segundo vector
void luchar() {
	int rondas = 0;
	int indice12 = 0;
	while (rondas<5) {
		cout << ">>> APARECE: " << supers[0]->getNombre() << "[Rango " << supers[0]->getRangoTexto() << "] (HP: " << supers[0]->getHP() << ") <<<" << endl;
		cout << "Turno de  " << humanos[0]->getNombre() <<  "(HP: " << humanos[0]->getHP() << "/ "<< humanos[0]->getHP()<<") <<<" << endl;
		int opcion;
		cout << "1. Atacar | 2. Habilidad Especial | 3. Usar Mochila: ";
		cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1: {
			cout << humanos[0]->getNombre() << " dispara armamento tactico a " << supers[0]->getNombre()<<endl;
			supers[0]->setHP(supers[0]->getHP() - humanos[0]->getAtaque());
			cout << "-> "<< supers[0]->getNombre() << " recibe "<< humanos[0]->getAtaque() << " de dano" << "(HP: " << supers[0]->getHP() << "/ " << supers[0]->getHP() << ") <<<" << endl;
			break;
		}
		case 2: {
			cout << "[ANTI-SUPE] "<<humanos[0]->getNombre() << " usa balas perforantes contra " << supers[0]->getNombre() <<"!" << endl;
			supers[0]->setHP(supers[0]->getHP() - humanos[0]->getAtaque());
			cout << "-> " << supers[0]->getNombre() << " recibe " << humanos[0]->getAtaque() << " de dano" << "(HP: " << supers[0]->getHP() << "/ " << supers[0]->getHP() << ") <<<" << endl;
			break;
		}
		default: {
			cout << "0. Botiquin" << endl;
			cout << "1. Vial V24" << endl;
			cout << "2. Granada Termita" << endl;
			int opcion2;
			cout << "Elige objeto: " << endl;
			cin >> opcion2;
			cout << supers[0]->getNombre() << "recibe " << humanos[0]->getAtaque() << "de dano" << "(HP: " << supers[0]->getHP() << "/ " << supers[0]->getHP() << ") <<<" << endl;
		}
		}
		rondas++;
	}
}
int main(){
	//Supers
	Super* super1 = new Super("Soldier Boy", 'A', "explosion");
	supers.push_back(super1);
	Super* super2 = new Super("Stromfront", 'B', "generar tormenta");
	supers.push_back(super2);
	Super* super3 = new Super("Firecracker", 'C', "televidente");
	supers.push_back(super3);
	Super* super4 = new Super("Black Noir", 'D', "volar");
	supers.push_back(super4);
	Super* super5 = new Super("The Deep", 'A', "explosion");
	supers.push_back(super5);
	Super* super6 = new Super("Sister Sage", 'B', "inteligencia");
	supers.push_back(super6);
	Super* super7 = new Super("Ryan", 'C', "super fuerza");
	supers.push_back(super7);
	Super* super8 = new Super("Marie Moreau", 'D', "controlar sangre");
	supers.push_back(super8);
	Super* super9 = new Super("Lamplighter", 'A', "luz");
	supers.push_back(super9);
	Super* super10 = new Super("Translucent", 'B', "invisible");
	supers.push_back(super10);
	Super* super11 = new Super("Mindstorm", 'C', "mente");
	supers.push_back(super11);
	Super* super12 = new Super("Cate Dunlap", 'D', "mente dos");
	supers.push_back(super12);
	Super* superEspecial = new Super("Homelander", 'A', "Rayos laser");
	supers.push_back(superEspecial);
	//Humanos
	Humano* humano1 = new Humano("Billy Butcher", 100, 140, 80, 60);
	humanos.push_back(humano1);
	Humano* humano2 = new Humano("Hughie", 100, 120, 70, 50);
	humanos.push_back(humano2);
	Humano* humano3 = new Humano("MM", 100, 110, 65, 40);
	humanos.push_back(humano3);
	Humano* humano4 = new Humano("Frenchie", 100, 105, 55, 30);
	humanos.push_back(humano4);
	luchar();
}
