#include <iostream>
#include "magasin.h"
//#include "client2.h"
#include "produit2.h"

#include <string>




using namespace std;


int main()
{
	
	
Magasin n;
//Produit P("UNDERWORLD","FILM", 6 , 68.45 ) ;
n.addProduct("UNDERWORLD","FILM", 6 , 68.45 );


//Produit A("Starwars","movie",8,65);
n.addProduct("Starwars","movie",8,65);

cout << "---------------------------------------------------" <<   endl;
cout << "   Produits du magasin :  "<<  endl ;

n.displayProd();


cout << "---------------------------------------------------"  <<endl;


cout << "  Produits trouvés :" <<  endl ;

n.findProd("tarwars");

n.findProd("Starwars");

cout << "---------------------------------------------------"<< endl;
n.updateQte("Starwars",5);
cout << "  Produit avec quantité modifiée :"<<  endl ;
n.findProd("Starwars");


/*

//cout << "prenom : "<< cl.getPrenom() << std::endl;

*/
	return 0;

}