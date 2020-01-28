#ifndef _magasin_h
#define _magasin_h
#include <vector>
#include <string>
#include "client2.h"
#include "produit2.h"
#include "order.h"



class Magasin{

public:
	
void vector<Product*> addProduit();



private:

std::vector<Product*> m_products;

std::vector<Client*> m_clients; 

std::vector<Order*> m_orders;

};


#endif