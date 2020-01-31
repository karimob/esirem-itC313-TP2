#include <iostream>

#include "magasin.h"

#include "client2.h"

#include "produit2.h"

#include <string>



//créer un objet vide de type magasin

Magasin::Magasin(){


// std::vector<Produit*> prod;
//std::vector<Client*> m_clients; 

// std::vector<Order*> m_orders;
}


Magasin::~Magasin(){

    int a = m_clients.size();

    int b = m_products.size();

    int c = m_orders.size();

     for (int i = 0; i < b; i++){

        delete m_products.at(i);    

        m_products.at(i) = nullptr;

    }


    for (int i = 0; i < a; i++){

        delete m_clients.at(i);

        m_clients.at(i) = nullptr;

    }

    for (int i = 0; i < c; i++){

        delete m_orders.at(i);  

        m_orders.at(i) = nullptr;

    }


}



// QUESTION 3.a


//ajouter un nouveau produit au magasin

void Magasin::addProduct(std::string titre, std::string description, int qte, float prix){

    Produit* p = new Produit(titre, description, qte, prix);

    m_products.push_back(p);

    

}



// QUESTION 3.b


//afficher à l’écran tous les produits référencés dans le magasin

void Magasin::displayProd() {
	
    int a = m_products.size();

    for (int i=0; i<a; i++){

        std::cout<< *m_products.at(i)<<std::endl;

    } 
}


// QUESTION 3.c

//afficher à l’écran un produit sélectionné par son nom

void Magasin::findProd(std::string titre) {

	 if (m_products.empty())

            std::cout<<"PAS DE PRODUITS AVEC CE NOM"<<std::endl;

    else{


        int a = m_products.size();

        Produit* p = nullptr;

        

        for (int i=0; i<a; i++){



            if (m_products.at(i)->getTitle() == titre ){

                

                p = m_products.at(i);
            }

        }


        if (p != nullptr){ 

        

            std::cout<< *p <<std::endl;
         }

        else 

            std::cout << "PAS DE PRODUITS : " << titre << std::endl;

        }
        

}

// QUESTION 3.d


 // mettre à jour la quantité d’un produit sélectionné par son nom

 	void Magasin::updateQte(std::string titre, int qte){

 		for (int i=0; i< m_products.size(); i++) {

 			if(m_products.at(i)-> getTitle() == titre){
            

                    m_products.at(i)-> setQte(qte);  

         	}
         }
		
 	} 






//QUESTION 5.a à 5.f
 	

//ajouter un nouveau client au magasin


void Magasin::addClient(std::string nom, std::string prenom){

    static int count = 0;

    int idclient = count++;

    //std::vector<Produit* > panier;

    Client* c = new Client(idclient, nom, prenom);

    m_clients.push_back(c);



}		


//afficher à l’écran tous les clients du magasin					

std::vector<Client*> Magasin::displayClient() {

	 int a = m_clients.size();

    for (int i=0; i<a; i++)

        std::cout<< m_clients.at(i)<<std::endl;

}



//afficher à l’écran un client sélectionné par son nom 	


void Magasin::findClient(std::string nom,std::string prenom) {



    if (m_clients.empty())

        std::cout<<"Aucun client nommé : "<< nom <<std::endl;

    else {

        Client* c= nullptr;

	   for (int i=0; i< m_clients.size(); i++) {

            if(m_clients.at(i) ->getPrenom() == prenom ||  m_clients.at(i)-> getNom() == nom ){

                c = m_clients.at(i);
             
            }


        }
        

        if(c == nullptr) std::cout<<" Aucun client nommé : "<< nom <<std::endl;

        else    std::cout<<" Affichage du client : "<< *c <<std::endl;

    }
    

}

// Afficher un client à partir de son identifiant

void Magasin::findClient(int idclient){

    if (m_clients.empty())

        std::cout<<"Pas de Clients "<<std::endl;

    else {

        int a = m_clients.size();

        Client* c = nullptr;

        for (int i=0; i<a; i++){

            if(m_clients.at(i)->getIdclient() == idclient)

                c = m_clients.at(i);

        }

        if(c == nullptr) std::cout<<" Aucun client avec : #"<< idclient<<std::endl;

        else std::cout<< " Affichage du client : "<<*c <<std::endl;

    }

}



// retourne un produit à partir de son titre

Produit* Magasin::return_prod(std::string& titre){

    Produit* p = nullptr;

    if (m_products.empty()){

        std::cout<<" No product to return. "<<std::endl;

        return p;

    }

    else {

        int a = m_products.size();

        for (int i=0; i<a; i++){


            if (m_products.at(i)->getTitle()  ==  titre){

             p = m_products.at(i);   
            }

        }

           

        return p;

    }

}


 // Ajoute un produit au panier d'un client sélectionné à partir de son nom

void Magasin::addProd(std::string titre, std::string prenom, std::string nom){

    if (m_clients.empty()){

        addClient(nom,prenom); // ajout du client

        m_clients.front()->addProd(return_prod(titre)); // ajout du produit sélectionner par son titre au panier du client  

    }

    int a =m_clients.size();

    for (int i=0; i<a; i++)

        if(m_clients.at(i)->getNom() == nom){

            if (return_prod(titre) != nullptr){

                m_clients.at(i)->add_product(return_prod(titre));

                std::cout<<" Adding product " << titre << " to cart of " << nom << std::endl;

            }

            else 

                std::cout << "No product "<< titre << std::endl;

        }

}



// Ajoute un produit au panier d'un client sélectionné à partir de son identifiant

void Magasin::addProd(std::string titre, int idclient){

    if (m_clients.empty()){

        std::cout<<" No client id :#"<< idclient <<std::endl;

    }

    int a = m_clients.size();

    for (int i=0; i<a; i++)

        if(m_clients.at(i)->getIdclient() == idclient){

            if (return_prod(titre) != nullptr){

                m_clients.at(i)->addProd(return_prod(titre));

                std::cout<<" Adding product "<< titre <<" to cart of client"<< idclient<< std::endl;

            }

            else 

                std::cout << "No product "<< titre << std::endl;

        }

}












//supprimer un produit du panier d’achat d’un client						

void Magasin::delProduct(std::string& titre, std::string& prenom, std::string& nom){
	
	if (m_clients.empty())

        std::cout<<" No product to delete."<<std::endl;

    else {

        int a = m_clients.size();

        for (int i=0; i<a; i++)

            if (m_clients.at(i)->getNom() == nom && m_clients.at(i)->getPrenom() == prenom)

                m_clients.at(i)->del_product(titre);

        std::cout << "Deletion of the product "<< titre << "from cart. " << std::endl;

    }       

}


// modifier la quantité d’un produit du panier d’achat d’un client

void Magasin::modifPan(std::string& titre,std::string& prenom, std::string& nom,int qte){

if (m_clients.empty())

        std::cout<<" Nothing to do. "<<std::endl;

    else {

        int a = m_clients.size();

        for (int i=0; i<a; i++)

            if (m_clients.at(i)->getNom() == nom && m_clients.at(i)->getPrenom() == prenom)

                m_clients.at(i)->modifQte(string titre,int qte);    


    }

}




// validation d'une commande

void Magasin::valide_commande(int idclient){

    static int count2 = 0;

    int id = count2++;

    int a = 0;

    std::cout << "Voulez-vous valider la Commande (1 pour oui / 0 pour non) : ";

    std::cin >> a;

    if (a == 1){

        Order* order = new Commande(id); // clt);

        int b = m_clients.size();

        for (int i=0; i < b ; i++){

            if (m_clients.at(i)->getUid() == idclient){

                order->setProduct(m_clients.at(i)->getPanier()); //copie du contenu du panier dans les produits de la commande 

                order->setClient(m_clients.at(i));

                order->setStatus(false);

                m_clients.at(i)->clear_panier(); // Vidange du panier du client

            }

        }

        m_orders.push_back(order);

        std::cout << "Commande éffectuée. "<< std::endl;

    }

}


// mise à jour le statut d'une commande

void Magasin::statut_commande(int id_com){

    int a = 0;

    int b = m_orders.size();

    std::cout << " La commande a été livrée (1 pour oui / 0 pour non) :  ";

    std::cin >> a;

    if (a == 1)

        for (int i=0; i < b; i++){

            if(m_orders.at(i)->getUid() == id_com)

                m_orders.at(i)->setStatus(true);

        }

}


//Affichage à l'écran de toutes les commandes passées

void Magasin::display_orders(){

    int b = m_orders.size();

    if(b > 0)

        for (int i=0; i < b; i++)

            std::cout << *m_orders.at(i);

}



// affichage des commandes d'un client donné

void Magasin::display_orders_clt(int idclient){

    int b = m_orders.size();

    for (int i=0; i < b ; i++){

        Client* clt = m_orders.at(i)->getClient();

        if ( clt->getUid() == idclient)

            std::cout <<  *clt << std::endl;

    }

}





std::vector<Produit*> Magasin::getm_products() const

{

    return m_products;

}

std::vector<Client*> Magasin::getm_clients() const

{

    return m_clients;

}

std::vector<Commande*> Magasin::getm_orders() const 

{

    return m_orders;

}










/*


            m_panier.at(i).modifQte(qte);
		
 	} 
