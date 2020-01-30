
#include <vector>
#include <string>


using namespace std;

Order::Order(string client,string statut){

m_client=client;
vector<Produit> m_prodcom;
m_statut=statut;
}

string Order::getClient() const{
	return m_client;
}

