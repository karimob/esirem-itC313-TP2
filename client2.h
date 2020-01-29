#ifndef _client_h
#define _client_h
#include <vector>
#include <string>
#include "produit2.h"


class Client {

public:

	Client(int idclient, std::string prenom, std::string nom);

	int getIdclient() const;

	std::string getPrenom() const;

	std::string getNom() const;
	
	std::vector<Produit> getPanier() ; 

	void addProduit(Produit product);  //ajouter un produit au panier d’achat
	 
	std::vector<Produit> videPanier() ;  //vider le panier d’achat

	void modifQte(); // modifier la quantité d’un produit ajouté au panier d’achat 

	void delProduct(std::string titre); // supprimer un produit du panier d’achat

	//friend std::ostream& operator << (std::ostream &output, Client c);

										//std::vector<Produit> affichePanier() ; 


private:

	int m_idclient;
	std::string m_prenom;
	std::string m_nom;
	std::vector<Produit> m_panier;

	

};

#endif