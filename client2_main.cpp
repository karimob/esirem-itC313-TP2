#include <iostream>
#include "produit2.h"
#include "client2.h"
#include <vector>
#include <string>

using namespace std;

int main(){

	


	Client kb(46,"RICHARD","GATES");


	Client cl(93,"ANTOINE","BETCH");

	Produit carrot("Carrotte","Legume",5,65);
	Produit carrot1("Car","Leg",5,6);
	Produit* p = &carrot;
	Produit* p1 = &carrot1;


	//cl.addProduit(carrot);

	cout << "---------------------------------------------------"<< endl;

	cl.addProduit(p);
	cl.addProduit(p1);
	cl.modifQte("Carrotte",8);

	cl.affichePanier();
	cout << "---------------------------------------------------"<< endl;
	cl.delProduct(carrot1.getTitle());
	cl.affichePanier();
		cout << "---------------------------------------------------"<< endl;
	cl.videPanier();
	cl.affichePanier();

	/*cout << "prenom : "<< cl.getPrenom() <<endl;

	cout << "nom : "<< cl.getNom() <<endl;

	cout << "identifiant : " << cl.getIdclient() <<endl;*/

	

	return 0;
	}