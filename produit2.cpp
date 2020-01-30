#include <iostream>

#include "produit2.h"
using namespace std;

						// QUESTION 2.a

//CONSTRUCTEUR
Produit::Produit(string titre,string description, int qte, float prix ){

	m_titre = titre;

	m_description = description ;

	if (qte >= 0)

		m_qte = qte ;

	if (prix >= 0 ) 

		m_prix = prix ;

}



string Produit::getTitle(){

	return m_titre ;

}



string Produit::getDescription(){

	return m_description ;

}



int Produit::getQte(){

	return m_qte ;

}



float Produit::getPrix(){

	return m_prix ;

}



void Produit::setQte(int qte){

	if( qte >= 0 ) 

		m_qte = qte ;

}


				// QUESTION 2.b


//surcharge pour afficher un produit
/*ostream& operator << (ostream &output,Produit product ) {

		output << "Nom du produit : " << product.m_titre <<endl << "  Description : "<< product.m_description <<std::endl << "  Quantite : " << product.m_qte <<endl <<"  Prix : " << product.m_prix <<"$"<<endl ;

		return output;

	}

*/