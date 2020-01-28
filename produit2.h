#ifndef _PRODUIT_H
#define _PRODUIT_H


						//QUESTION 2.a


#include <iostream>

#include <string>

class Produit {

	

public :

 	friend std::ostream& operator << (std::ostream &output, Produit product);

	Produit(std::string titre, std::string description, int qte, float prix );

	std::string getTitle();

	std::string getDescription();

	int getQte();

	float getPrix();

	void setQte(int quantite);

	


private :

	std::string m_titre ;

	std::string m_description ;

	int m_quantite ;

	float m_prix ;





};





#endif 