#include <iostream>
#include "magasin.h"
#include "client2.h"
#include "produit2.h"

#include <string>




using namespace std;


int main()
{
	
Magasin n;
Produit P("UNDERWORLD","FILM", 6 , 68.45 ) ;
n.addProduit(P);
cout << P ;

n.updateQte("UNDERWORLD");
cout << P ;


//cout << "prenom : "<< cl.getPrenom() << std::endl;


	return 0;

}