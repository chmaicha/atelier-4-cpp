#include <iostream>
using namespace std ;
void afficherdate(const string& s){  //creation de la fonction quiva aficher le resultat
	if(s.length() !=12)   //le nombre de chiffre ne dois etre ni plus ni moins de 12
	cout<<"la date est incorrecte"<<endl;
	else{
		cout <<"date:"<< s.substr(0,2) <<"/" << s.substr(2,2) <<"/"<< s.substr(4,4) << endl; //affichage de la date 
		cout <<"date:"<< s.substr(8,2) <<"/"<< s.substr(8,2) <<"/" << s.substr(10,2) << endl; // affichage de l heure 
		
	}
}
int main(){
	string d("010920091123"); // donner la val de sting 
	afficherdate(d);  // on affiche lke resultat final 
}
