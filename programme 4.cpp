#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std ;
int main(){
	list<string>mylist;                   //creation liste 
mylist.push_back("chaimae , aboulouafa,21ans"); // remplissage de nom prenom et age par pushback 
mylist.push_back("hiba,aboulouafa,31ans");
mylist.sort(); //triage de liste 
list<string>::iterator it=mylist.begin()  ; //
for(;it!=mylist.end();it++){ //affixhage de la liste element par element triee
	cout<<*it<<endl;
}
return 0 ;
}
