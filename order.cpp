
#include <vector>
#include <string>
#include <iostream>

#include "order.h" 




Order::Order(int uid) {

m_uid=uid;
}


int Order::getUid() const {

	return m_uid;

}



Client* Order::getClient() const{
	return m_client;
}



void Order::setClient(Client* c){

	m_client = c;

}



void Order::setProduct(std::vector<Produit*> p) {

	int a = p.size();

//	if (p != nullptr)

//		m_products_order.push_back(p);

	for(int i = 0; i < a; i++)

		m_products_order.push_back(p.at(i));

}



void Order::setStatus(bool s){

		m_status = s;

}

std::ostream &operator << (std::ostream& output, Order& order){

	output<< "ID Order : " << order.m_uid << " -  Nom client : " << order.m_client->getNom()

			 << " -  ID client : " <<order.m_client->getIdclient() << " -  Status : " << order.m_status 

			 << " -  Products : ";

	int a = order.m_products_order.size(); 

	if (a>0)	

		for (int i=0; i<a; i++)

			std::cout<< *order.m_products_order.at(i)<<std::endl;

	return output;

}