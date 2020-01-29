#include "client2.h"
#include "produit2.h"
#include <vector>
#include <string>

using namespace std;
		//QUESTIONS 4.a à 4.f


//CONSTRUCTEUR

Client::Client(int idclient, string prenom, string nom){

	m_idclient = idclient;
	m_prenom = prenom;
	m_nom = nom;
	vector<Produit> m_panier;
	//m_panier = panier;
}

	//Client cl(id,prenom,nom);


//affiche l'id d'un client

int Client::getIdclient() const{
	return m_idclient;
}

//affiche le prenom du client
string Client::getPrenom() const{
	return m_prenom;
}

//affiche le nom du client

string Client::getNom() const{
	return m_nom;
}


//ajoute un produit au panier
void Client::addProduit(Produit product){
	m_panier.push_back (product);
}



//vider le panier d’achat
void Client::videPanier() {
	for (int i=0; i< m_panier.size(); i++) {

	m_panier.clear();
	}
}


// modifier la quantité d’un produit ajouté au panier d’achat
 void Client::modifQte(){


 }

// supprimer un produit du panier d’achat

void Client::delProduct(string titre){
	
	for (int i=0; i< m_panier.size(); i++) {

 		if(m_panier.at(i).getTitle() == titre){
            
            	m_panier.erase(m_panier.begin(),m_panier.end()) ; 

         }
    }
 }


//affiche le panier
vector<Produit> Client::getPanier() {

	return m_panier;
}

//Surcharger l’opérateur << pour pouvoir afficher toutes les informations du client 


/*ostream& operator << (ostream &output,Client c ) {

		output << "ID du Client : " << c. getIdclient() << endl << " Prenom: "<< c.getPrenom() <<endl << " Nom : " <<c.getNom() <<endl << c.getPanier()<<endl;

		return output;

}*/

	


/*


std::vector<Produit> Client::affichePanier() {

	int n;
	n = cl.getPanier().size();

	std::cout << "  Voici votre panier de produits: " <<std::endl;

	for (int c=0;c<n;c++){
	std::cout<<cl.getPanier().at(c)  << std::endl;
	}

}
*/