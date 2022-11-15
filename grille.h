#include <iostream>
#include <vector>

#ifndef GRILLE_H
#define GRILLE_H

class Grille{
public:
	Grille(int size = 4);

private:
	int _size;
	std::vector<vector<int>> _grille;
}


#endif //GRILLE_H