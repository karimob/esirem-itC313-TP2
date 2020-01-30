#include <iostream>

#include "magasin.h"

#include "client2.h"

#include "produit2.h"

#include <string>


using namespace std;

Magasin::Magasin(){


std::vector<Produit> m_products;

std::vector<Client> m_clients; 

// std::vector<Order*> m_orders;
};

/*

// QUESTION 3.a


//ajouter un nouveau produit au magasin

void Magasin::addProduit(Produit p) {
	 Magasin::m_products.push_back(p);
}

// QUESTION 3.b


//afficher à l’écran tous les produits référencés dans le magasin

void Magasin::displayProd() {
	 for (auto i = m_products.cbegin(); i != m_products.cend(); ++i) 
	 	
        cout << *i << " "; 
}


// QUESTION 3.c

//afficher à l’écran un produit sélectionné par son nom

void Magasin::findProd(string titre) {

	 for (int i=0; i< m_products.size(); i++) {

         if(m_products.at(i).getTitle() == titre){

             cout<< m_products.at(i) << " ";
         }
     }
}

// QUESTION 3.d


 // mettre à jour la quantité d’un produit sélectionné par son nom

 	void Magasin::updateQte(string titre, int qte){

 		for (int i=0; i< m_products.size(); i++) {

 			if(m_products.at(i).getTitle() == titre){
            

                    m_products.at(i).setQte(qte);

				  //cout<<m_products.at(i).setQte(qte) << " ";   

         	}
         }
		
 	} 
/*

//QUESTION 5.a à 5.f
 	

//ajouter un nouveau client au magasin
 	void Magasin::addClient(Client* c){

	 Magasin::m_clients.push_back(c);

 	}					


//afficher à l’écran tous les clients du magasin					

void Magasin::displayClient() {
	 for (auto i = m_clients.cbegin(); i != m_clients.cend(); ++i) 
	 	
        cout << *i << " "; 
}



//afficher à l’écran un client sélectionné par son nom ou son identifiant	


void Magasin::findClient(string nom,int idclient) {

	 for (int i=0; i< m_clients.size(); i++) {

         if(m_clients.at(i).getIdclient() == idclient ||  m_clients.at(i).getNom() == nom ){

             cout<< m_clients.at(i) << " ";
         }
     }
}



//ajouter un produit au panier d’achat d’un client
				
void Magasin::addProd(Produit p){

	 Client::m_panier.push_back(p);

 	}					

//supprimer un produit du panier d’achat d’un client						

    void Magasin::delProduct(string titre){
	
	for (int i=0; i< m_panier.size(); i++) {

 		if(m_panier.at(i).getTitle() == titre){
            
            	m_panier.erase(m_panier.begin(),m_panier.end()) ; 

         }
    }
 }


// modifier la quantité d’un produit du panier d’achat d’un client

void Magasin::modifPan(string titre,int qte){



 m_panier.at(i).modifQte(qte);
		
 	} 
*/