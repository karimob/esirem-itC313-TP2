#include "client2.h"
#include "produit2.h"
#include <vector>
#include <string>

		//QUESTIONS 4.a et 4.b


//CONSTRUCTEUR

Client::Client(int idclient, std::string prenom, std::string nom){

	m_idclient = idclient;
	m_prenom = prenom;
	m_nom = nom;
	std::vector<Produit> m_panier;
	//m_panier = panier;
}

	//Client cl(id,prenom,nom);


//affiche l'id d'un client

int Client::getIdclient() const{
	return m_idclient;
}

//affiche le prenom du client
std::string Client::getPrenom() const{
	return m_prenom;
}

//affiche le nom du client

std::string Client::getNom() const{
	return m_nom;
}

//affiche le panier
std::vector<Produit> Client::getPanier() {

	return m_panier;
}

/*std::vector<Produit> Client::affichePanier() {

	int n;
	n = cl.getPanier().size();

	std::cout << "  Voici votre panier de produits: " <<std::endl;

	for (int c=0;c<n;c++){
	std::cout<<cl.getPanier().at(c)  << std::endl;
	}

}
*/

//ajoute un produit au panier
void Client::addProduit(Produit product){
	m_panier.push_back (product);
}