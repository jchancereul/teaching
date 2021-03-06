#include "velo6.h"
#include "voiture6.h"
#include <iostream>
#include <vector>
using namespace std;

void afficheDescriptions(const vector<Vehicule *> & listeVehicules)
{
    for(int i = 0; i < listeVehicules.size(); i++)
	    listeVehicules[i]->description();     
}
	
int main()
{
	vector<Vehicule *> listeVehicules;

	for(int i= 0; i<5;i++)	
	{
		listeVehicules.push_back(dynamic_cast<Vehicule *>(new Velo())) ;
		listeVehicules.push_back(dynamic_cast<Vehicule *> (new Voiture())) ;
	}

	afficheDescriptions(listeVehicules);

	return 0;
}


