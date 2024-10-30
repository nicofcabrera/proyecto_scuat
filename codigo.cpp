#include <iostream>
#include <conio.h>
#include "membreteTP.h" // Libreria Propia
#include <fstream> // Archivos
#include <string.h>

using namespace std;

/*
	Idea de codigo
	crear un programa que genere una lista de N cantidad de alumnos. Sirve como para tener un anotador.

*/


void escribir();

int main() {
	int opcion;
	string nombre, apellido;
	bool bandera = true;
	
	do{
		bienvenida();
		cout<<"\nRegistro de estudiantes"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"\n1.Registrar"<<endl;
		cout<<"2.Como funciona"<<endl;
		cout<<"\nElije una opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				escribir();
				bandera = false;
				cout<<"\nEl registro se hizo correctamente"<<endl;
				getch();
			break;
			
			case 2:
				cout<<"\nLa idea de este programa es generar en un archivo de texto un listado de alumnos, con el fin de poder pasar luego a un archivo excel o donde fuese para tener una base de datos sobre los alumnos."<<endl;
				getch();
		}
	}while(bandera);
	
	cout<<"\nGracias por usar este programa."<<endl;
	return 0;
}

// #############################333

void escribir(){
	ofstream archivo;
	
	int totalAlumnos;
	cout<<"Ingrese la cantidad de alumnos a anotar: ";
	cin>>totalAlumnos;
	
	string alumnos[totalAlumnos];
	
	
	archivo.open("alumnos_listado.txt", ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Escriba el listado de alumnos."<<endl;
	
	for(int i = 1; i <= totalAlumnos ; i++){
		cout<<i<<". ";
		cin>>alumnos[i-1];
	}
	
	archivo<<"Listado Alumnos"<<endl;
	
	for (int i = 1 ; i <= totalAlumnos; i++){
		archivo<<i<<". "<<alumnos[i-1]<<endl;	
 	}
	
	archivo.close();

}





