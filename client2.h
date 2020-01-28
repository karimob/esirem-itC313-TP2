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

	std::vector<Produit*> getPanier() const;

	void addProduit(Produit product);

private:

	int m_idclient;
	std::string m_prenom;
	std::string m_nom;
	std::vector<Produit*> m_panier;

	

};

#endif