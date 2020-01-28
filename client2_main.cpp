#include <iostream>
#include "produit2.h"
#include "client2.h"
#include <vector>
#include <string>


int main(){

	int id;
	std::string prenom;
	std::string nom;
	id = 98;

	prenom = "ANTHONY";
	nom = "BETCH";

	Client cl(id,prenom,nom);

	Produit carrot("Carrotte","Legume",5,65);

	Produit game("got","excellent jeu",9,76.8);

	cl.addProduit(game);

	cl.addProduit(carrot);


	std::cout << "prenom : "<< cl.getPrenom() << std::endl;

	std::cout << "nom : "<< cl.getNom() << std::endl;

	std::cout << "identifiant : " << cl.getIdclient() << std::endl;

	

	return 0;
	}