#include "client2.h"
#include "produit.h"
#include <vector>
#include <string>

		//QUESTIONS 4.a et 4.b


Client::Client(int idclient, std::string prenom, std::string nom){

	m_idclient = idclient;
	m_prenom = prenom;
	m_nom = nom;
	std::vector<Produit*> panier;
	m_panier = panier;
}

int Client::getIdclient() const{
	return m_idclient;
}

std::string Client::getPrenom() const{
	return m_prenom;
}

std::string Client::getNom() const{
	return m_nom;
}

std::vector<Produit> Client::getPanier() const{
	return m_panier;
}

void Client::addProduit(Produit product){
	m_panier.push_back (product);
}