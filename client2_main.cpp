#include <iostream>
#include "produit2.h"
#include "client2.h"
#include <vector>
#include <string>

using namespace std;

int main(){

	

	//prenom = "ANTHONY";   nom = "BETCH";

	Client cl(93,"ANTOINE","BETCH");

	Produit carrot("Carrotte","Legume",5,65);

	Produit game("got","excellent jeu",9,76.8);

	cl.addProduit(game);

	cl.addProduit(carrot);


	/*cout << "prenom : "<< cl.getPrenom() <<endl;

	cout << "nom : "<< cl.getNom() <<endl;

	cout << "identifiant : " << cl.getIdclient() <<endl;*/

	

	return 0;
	}