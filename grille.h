#include <iostream>
#include <vector>

#ifndef GRILLE_H
#define GRILLE_H

class Grille{
public:
	Grille(int size = 4);
	void affichage();
	int getSize();
	void generation();

private:
	int _size;
	std::vector<std::vector<int>> _grille;
	bool isEmpty(int x ,int y);
};


#endif //GRILLE_H