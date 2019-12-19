#include <iostream>
#include "Produit1.h"

//  Question 2a

Produit::Produit(std::string titre, std::string description, int quantite,float prix ){
	m_titre = titre;
	m_description = description ;
	if (quantite >= 0)
		m_quantite = quantite ;
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
	return m_quantite ;
}

float Produit::getPrice(){
	return m_prix ;
}

void Produit::setQuantite(int quantite){
	if( quantite >= 0 ) 
		m_quantite = quantite ;
}

//    Question 2b
std::ostream& operator << (std::ostream &output,Produit prod ) {
		output << "Nom du produit : " << prod.m_titre << std::endl << "Description : "<< prod.m_description <<std::endl << "Quantite : " << prod.m_quantite <<std::endl <<"Prix : " << prod.m_prix << std::endl ;