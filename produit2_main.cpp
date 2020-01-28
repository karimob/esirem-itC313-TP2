
#include <iostream>

#include "produit2.h"

using namespace std;

int main (){

	Produit P("UNDERWORLD","FILM", 6 , 68.45 ) ;

	P.setQuantite( 9 );

	std::cout << P ;



	

	return 0 ;



}