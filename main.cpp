
#include <vector>
#include <algorithm>
#include <iostream >
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


	vector <char> repetidas (string palabra){
		vector <char> c;
		string reemp;
		string aux;
		
		char f;
		int cont = 0;
		for(int i = 0; i < palabra.length();i++){
			for(int j = 1; j < reemp.length(); j++ ){
				if(palabra.at(i)==reemp.at(j)){
					cont++;
				}
			}
			if(cont == 0){
				reemp += palabra.at(i);
				c.push_back(reemp.at(i));
			}
			cont == 0;
		}
		cout<<aux;
		return c;
	}
	vector <int>* contador(string palabra,vector<char> v){
		int cont = 0;
		vector <int> f;
		vector <int>* puntero;
		string acum;
		  puntero = &f;
		  for(int i = 97; i <= 122; i++){
		  	for(int s = 0; s< palabra.length();s++){
		  		char carac = palabra.at(s);
		  		if(i == (int)carac){
		  			acum += carac;
				  }
			  }
		  }
		  
		for(int i = 0 ; i < v.size();i++){
			for(int j = 0; j <acum.length();j++){
				if(acum.at(j) == v[i]){
				cont++;	
				}
				
						
			}
			f.push_back(cont);
			cout<<cont<<" ";
			cont = 0;
				
			
		}
		
		
		return puntero;
	}
	
	void mostrar_vector(vector<char> elementos) {
	cout<<"[";
 	for (int i = 0; i < elementos.size(); i++){
 		cout << elementos[i];
		 if(i<elementos.size()-1){
		 	cout<<",";
		 }	
	 } 
	cout<<"] ";
		cout << endl;

	}
int main() {
	int menu;
	menu = 0;
	while(menu != 5){
		
		cout<<"\n";
		cout<<"1.Ejercicio 1 \n";
		cout<<"2.Ejercicio 2 \n";
		cout<<"3.Ejercicio 3 \n";
		cout<<"4. Ejercicio 4 \n";
		cout<<("5. Salir\n ");
		
		cin>> menu;
	
		if(menu == 1 ){
		string palabra;
		vector <char> c;
		cout<<"Ingrese una palabra: ";
		cin>> palabra;
		 
		mostrar_vector(repetidas(palabra));
		}
		if(menu == 2){
			string palabra;
			string caracteres;
			cout<<"Ingrese palabra: ";
			cin>>palabra;
				cout<<" Ingrese caracteres a encontrar : ";
				cin >> caracteres;
				vector <char> v; 
				for(int i = 0; i < caracteres.size(); i++){
					v.push_back(caracteres.at(i));
				}
				
			cout<<contador(palabra,v);	
		}
		if(menu == 3){
			
		}
		if(menu == 4){
			
		}
	
	
	}
		
	
	
	
	return 0;
}
