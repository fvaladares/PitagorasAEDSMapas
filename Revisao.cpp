//============================================================================
// Name        : Revisao.cpp
// Author      : Fabricio Valadares
// Version     :
// Copyright   : Copy with attribution
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
#include<random>
#include<time.h>
#include<iterator>


using namespace std;

typedef struct carro {
	int codigo;
	string modelo;
	string ano;
} Carro;

int main() {
	Carro novoModelo;
	srand(time(0));
	map<int, Carro> toyota;


	int cont = 0;
//
//	while(cont < 100) {
//		cout << rand()%100 + 1 << endl;
//		cont ++;
//	}

	novoModelo.codigo = rand()%100 + 1;
	novoModelo.modelo = "Etios";
	novoModelo.ano = "2018";

	toyota[novoModelo.codigo] = novoModelo;
//	toyota.insert(pair<int, carro>(novoModelo.codigo, novoModelo));

//	cout << "Modelo cadastrado: " << toyota[novoModelo.codigo].modelo << " "
//			<< toyota[novoModelo.codigo].ano << " "
//			<< "Código: " << toyota[novoModelo.codigo].codigo << endl;

	novoModelo.codigo = rand()%100 + 1;
		novoModelo.modelo = "Corolla Cross";
		novoModelo.ano = "2022";

	toyota[novoModelo.codigo] = novoModelo;

//	cout << "Modelo cadastrado: " << toyota[novoModelo.codigo].modelo << " "
//			<< toyota[novoModelo.codigo].ano << " "
//			<< "Código: " << toyota[novoModelo.codigo].codigo << endl;

	map<int, Carro>::iterator it = toyota.begin();

	while (it != toyota.end()) {

		int codigo = it->first;
		Carro car = it->second;

		cout << "Modelo cadastrado: " << car.modelo << " "
					<< car.ano << " "
					<< "Código: " << car.codigo << endl;

		it++;
	}
	return 0;
}












