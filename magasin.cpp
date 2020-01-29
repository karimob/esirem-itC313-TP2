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








// Add products to the store with Title, Description,  Quantity  and Price

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

 	void Magasin::updateQte(string titre){

 		for (int i=0; i< m_products.size(); i++) {

 			if(m_products.at(i).getTitle() == titre){
            
            	int qte =9;
				m_products.at(i).setQte(qte) ;   

         	}
         }
		
 	} 



 	