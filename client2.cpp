#include "client2.h"
#include <vector>
#include <string>

using namespace std;



		//QUESTIONS 4.a à 4.f


//CONSTRUCTEUR

Client::Client( int idclient, string prenom, string nom){

	m_idclient = idclient;
	m_prenom = prenom;
	m_nom = nom;
	//vector<Produit> m_panier;
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
void Client::addProduit(Produit* product){

	if ( product != nullptr)

	m_panier.push_back (product);
}



//vider le panier d’achat
void Client::videPanier() {
	

	m_panier.clear();
	
}


// modifier la quantité d’un produit ajouté au panier d’achat
 void Client::modifQte(string titre,int qte){

if (m_panier.empty())

		cout<<" RIEN A FAIRE "<<endl;

	else{
		int a = m_panier.size();
 		for (int i=0; i< a; i++) {

 			if(m_panier.at(i)->getTitle() == titre){
            
            	
				m_panier.at(i)->setQte(qte) ;   

         	}
         }
     }
 }

// supprimer un produit du panier d’achat

void Client::delProduct(string titre){

	if (m_panier.empty())

		cout<<" RIEN A FAIRE "<<endl;

	else{
		int a = m_panier.size();
		for (int i=0; i< a; i++) {

 			if(m_panier.at(i)->getTitle() == titre){
 				m_panier.erase(m_panier.begin()+i);
            	
            	//m_panier.at(i)= nullptr;
            	 ; 

         	}
   		 }
   	}
 }


//affiche le panier
 
vector<Produit*> Client::getPanier() {

	return m_panier;
}


//vector<Produit> Client::affichePanier() {

void Client::affichePanier() {

	cout << "  Voici votre panier de produits: " <<endl;
	int a = m_panier.size();
	for (int c=0;c < a;c++){
	
		cout<<*m_panier.at(c)  <<endl;
	
	}


}


//Surcharge de l’opérateur << pour pouvoir afficher toutes les informations du client 


ostream& operator << (ostream &output,Client &c ) {

	output << "ID du Client : " << c.m_idclient << endl << " Prenom: "<< c.m_prenom <<endl << " Nom : " <<c.m_nom <<endl << "  Panier : ";
		int a = c.m_panier.size();
		for (int i=0;i<a;i++){
	
			if(i >0)

		cout<<*c.m_panier.at(i) <<endl;
	
		}


	return output;

}

	

