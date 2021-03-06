#ifndef _magasin_h
#define _magasin_h
#include <vector>
#include <string>
#include "client2.h"
#include "produit2.h"
#include "order.h"



class Magasin{

public:

    Magasin();

    ~Magasin();

    void addProduct(std::string titre, std::string description, int qte, float prix) ;  //ajouter un nouveau produit au magasin

    void displayProd();  					//afficher à l’écran tous les produits référencés dans le magasin

    void findProd(std::string titre);   	//afficher à l’écran un produit sélectionné par son nom

    void updateQte( std::string titre, int qte);   	// mettre à jour la quantité d’un produit sélectionné par son nom




    void addClient( int idclient);					//ajouter un nouveau client au magasin
    void addClient(std::string nom, std::string prenom);

    void displayClient();                      //afficher à l’écran tous les clients du magasin


    Produit* return_prod(std::string& titre);            //permet de renvoyer pour l'ajouter au panier d'un client


    void findClient(std::string nom, std::string prenom);		//afficher à l’écran un client sélectionné par son nom ou son identifiant
    void findClient( int idclient);               //afficher à l’écran un client sélectionné par son identifiant
    



    void addProduit(std::string titre, std::string prenom,std::string nom);					//ajouter un produit au panier d’achat d’un client
    void addProduit(std::string titre, int idclient);



    void delProduct(std::string& titre, std::string& prenom, std::string& nom);								//supprimer un produit au panier d’achat d’un client

	void modifPan(std::string& titre,std::string& prenom, std::string& nom,int qte);							// modifier la quantité d’un produit du panier d’achat d’un client. 
 



    void valide_commande(int idclient);       //permet de valider une commande

    void statut_commande(int id_com); // permet de modifier le statut d'une commande (livrée ou pas)

    void display_orders();

    void display_orders_clt(int idclient); //permet d'afficher toutes les commandes d'un client donné

    std::vector<Produit*> getm_products() const ;

    std::vector<Client*> getm_clients() const;

    std::vector<Order*> getm_orders() const ;




private:

std::vector<Produit*> m_products;

std::vector<Client*> m_clients; 

std::vector<Order*> m_orders;


};


#endif