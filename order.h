#ifndef _order_h
#define _order_h
#include "client2.h"
#include "produit2.h"
//client prodiuts  statut

class Order{



public:


	Order(int uid);   // Client* clt);

	int getUid() const;

	Client* getClient() const;

	void setProduct(std::vector<Produit*>);

	void setClient(Client* c);

	void setStatus(bool s);

	friend std::ostream& operator << (std::ostream &output, Order& order); // surcharge de l'opérateur << pour afficher toutes les informations d'une commande





private:

	int m_uid;

	Client* m_client;

	std::vector<Produit*> m_products_order;

	bool m_status; // vrai : commande livrée et faux : commande non livrée

};






#endif