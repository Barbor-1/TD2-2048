#include <iostream>
#include <stdlib.h> // rand()
#include "grille.h"


Grille::Grille(int size) : _size(size){
	
	for (int i=0;i<_size;i++){
		_grille.push_back(std::vector<int>{0});
		for (int j=0;j<_size;j++){
			_grille[i].push_back(0);
		}
	}
	
}

int Grille::getSize(){
	return _size;
}


void Grille::affichage(){
	for (int i=0;i<_size;i++){
		for (int j=0;j<_size;j++){
			std::cout << _grille.at(i).at(j);
		}
		std::cout << std::endl;
	}
}

//fonction si la grille est rempli !=0

void Grille::generation(){
	//D'abord vérfier la case -> fonction (do while)
	//Ajouter une valeur
	int x = rand() % _size;
	int y = rand() % _size;
	if (isEmpty(x,y)){
		_grille[x][y] = 2 + 2(rand()%2)
	}
}


bool Grille::isEmpty(int x, int y){
	if (_grille[x][y] == 0){
		return true;
	else
		return false;

	}
}
