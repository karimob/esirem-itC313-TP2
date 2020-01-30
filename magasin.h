#ifndef _magasin_h
#define _magasin_h
#include <vector>
#include <string>
#include "client2.h"
#include "produit2.h"
// #include "order.h"



class Magasin{

public:

    Magasin();

    void addProduit(Produit p);  			//ajouter un nouveau produit au magasin

    void displayProd();  					//afficher à l’écran tous les produits référencés dans le magasin

    void findProd(std::string titre);   	//afficher à l’écran un produit sélectionné par son nom

    void updateQte( std::string titre);   	// mettre à jour la quantité d’un produit sélectionné par son nom



    void addClient(Client* c);						//ajouter un nouveau client au magasin

	void displayClient();					//afficher à l’écran tous les clients du magasin

    void findClient(std::string nom, int idclient);		//afficher à l’écran un client sélectionné par son nom ou son identifiant

    void addProd(Produit p);					//ajouter un produit au panier d’achat d’un client

    void delProduct(std::string titre);								//supprimer un produit au panier d’achat d’un client

	void modifPan(std::string titre,int qte);							// modifier la quantité d’un produit du panier d’achat d’un client. 
 



private:

std::vector<Produit> m_products;

std::vector<Client*> m_clients; 

// std::vector<Order*> m_orders;

};


#endif