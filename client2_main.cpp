#include <iostream>
#include "produit.h"
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

	int i;
	i = cl.getPanier().size();

	std::cout << "      Voici votre panier de produits: " <<std::endl;

	for (int c=0;c<i;c++){
	std::cout<<cl.getPanier().at(c)  << std::endl;
	}

	return 0;
	}