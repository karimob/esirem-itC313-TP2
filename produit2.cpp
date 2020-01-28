#include <iostream>

#include "produit2.h"


// QUESTION 2.a


Produit::Produit(std::string titre, std::string description, int qte, float prix ){

	m_titre = titre;

	m_description = description ;

	if (qte >= 0)

		m_qte = qte ;

	if (prix >= 0 ) 

		m_prix = prix ;

}



std::string Produit::getTitle(){

	return m_titre ;

}



std::string Produit::getDescription(){

	return m_description ;

}



int Produit::getQuantite(){

	return m_qte ;

}



float Produit::getPrix(){

	return m_prix ;

}



void Produit::setQte(int qte){

	if( qute >= 0 ) 

		m_qte = qte ;

}


				// QUESTION 2.b


std::ostream& operator << (std::ostream &output,Produit product ) {

		output << "Nom du produit : " << product.m_titre << std::endl << "  Description : "<< product.m_description <<std::endl << "  Quantite : " << product.m_qte <<std::endl <<"  Prix : " << product.m_prix << std::endl ;

		return output;

	}