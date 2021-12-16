#include <iostream>
using namespace std ;
 class complex { 
public :
	 int choix,re,im;
 complex(){  // definition d un constructeur 
	 }
complex(int r,int i){   
       
       re=r; //initialisation des valeurs 
       im=i;
     
       }
    complex operator+(complex a)//surcharge d'operateur pour laddition
    {
        complex s;   //creation d un objet danslequel on va stoquer la sommes de sreeles et imaginaires 
        s.re = re + a.re;
        s.im = im + a.im;
        return s;  // s return la valeur de l addition 
    }
 complex operator-(complex a)  //surcharge d'operateur pour la soustraction
    {
        complex s;
        s.re = re - a.re;
        s.im = im - a.im;
        return s;
    }
      complex operator*(complex a) //surcharge d'operateur pour la multiplication
    {
        complex p;
        p.re = re * a.re - im * a.im;
        p.im = re * a.im + im * a.re;
        return p; //return le resultat de la multiplication 
    }
    complex operator / (complex a){  //surcharge d'operateur pour la division
			
			complex d;
			d.im=re/a.re;
			d.re=im/a.im;
			return d;  // return la valeur de la division
		}


};
int main(){
  int r1,r2,im1,im2,choix;            //l utilisateur entre les valeurs des pariles reels et imaginaire des deux complexes
   cout << "entrer la partie imaginaire du premier complexe"<<endl;       
        cin >> im1 ; 
        cout << "entrer la partie reele du premier complexe"<<endl;
        cin >> r1 ;
        cout << "complex 1: "  << r1<< "+ i* " << im1 << endl;  //affichage de complex1
        cout << "entrer la partie imaginaire du deuxieme complexe"<<endl;
        cin >> im2 ;
        cout << "entrer la partie reele du deuxieme complexe"<<endl;
        cin >> r2 ;
        cout << "complex 2: "  << r2<< "+ i* " << im2 << endl; //affichage de complexe 2
complex c1(r1,im1);
complex a(r2,im2);
complex c3 = c1 + a;      
complex c4 = c1 - a;
complex c5 = c1 * a;
complex c6 = c1 / a;

        cout << "veuillez choisir une operation du menu suivant :"<<endl;   //affichage du menu
            string menu[4]; 
        menu[0] = "1. +" ;  
        menu[1] = "2. -";  
        menu[2] = "3. * ";   
        menu[3] = "4. / ";   
        for(int i(0); i<4; ++i)
        { cout << menu[i] << endl;}
        cin >> choix ;
    if (choix == 1 ){                 //selon le choix de l utilisateur on appel l opperateur de l operation choisie
           
           cout << "SOMME EST : " <<c3.re<< "+ i* " << c3.im << endl;   }   //affichage de chaque resultat
       else if (choix == 2){ 
          
          cout << "SOUSTRACTION EST : " <<c4.re<< "+ i* " <<c4.im<< endl;   
     }  
      else if (choix == 3)
        {   
            cout << "PRODUIT EST : " << c5.re<< "+ i* " << c4.im << endl; 
        }
      else 
       { 
           cout << "LA DIVISION EST : " << c6.re<< "+ i* " << c6.im<< endl;  
        }
    return 0;
}
