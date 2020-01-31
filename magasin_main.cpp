#include <iostream>
#include "magasin.h"
#include "client2.h"
#include "produit2.h"

#include <string>




using namespace std;


int main()
{
	
	
Magasin n;

n.addProduct("UNDERWORLD","FILM", 6 , 68.45 );


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


cout << "---------------------------------------------------"<< endl;






Magasin my_easystore;

	// Add new clients

	my_easystore.addClient("Dominique", "Ginhac");

	my_easystore.addClient("Bill", "Gates");

	my_easystore.addClient("Richard", "Stallman");

	my_easystore.addClient("Alan", "Turing");

	my_easystore.addClient("Steve", "Jobs");



	// Display all the clients

	std::cout << std::endl << "__________Tous les clients__________"<< std::endl;

	my_easystore.displayClient();



	// Display clients "Richard Stalman" and 4

	std::cout << std::endl << "__________ Affichage d'un client à partir de son nom __________"<< std::endl;

	my_easystore.findClient("Richard", "Stallman");

	std::cout << std::endl << "__________ Affichage d'un client à partir de son id __________"<< std::endl;

	my_easystore.findClient(2);



	// Add products to the store with Title, Description, Price and Quantity

	my_easystore.addProduct("Play Station","Console de jeu Sony", 249.99,10);

	my_easystore.addProduct("Switch", "Console de jeu Nintendo", 299.99,30);

	my_easystore.addProduct("Xbox One", "Console de jeu Microsoft", 179.99,15);



	// Add a product with its title and add to a client identified by his name	

	std::cout << std::endl << "__________ Commande éfectuée par un client __________"<< std::endl;

	my_easystore.addProduit("Casque RV PS", "Richard", "Stallman");



	// Add a product with its title and add to a client identified by his uid

	my_easystore.addProduit("Casque Audio", 4);







	return 0;

}