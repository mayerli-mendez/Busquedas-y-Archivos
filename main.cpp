#include <iostream>
#include <fstream>
using namespace std;

void ingresarDatos();
void mostrarDatos();

int main() {
  int op;
  do
  {
    cout<<"\nOPCIONES"<<endl;
    cout<<"1. Ingresar datos"<<endl;
    cout<<"2. Mostrar datos"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingrese el número de su opción: ";
    cin>>op;
    switch (op)
    {
      case 1:
      //cin.ignore();
      while(getchar()!='\n');
      ingresarDatos();
      break;
      case 2:
      //cin.ignore();
      while(getchar()!='\n');
      mostrarDatos();
      break;
    }
  }
  while(op!=3);
}

void ingresarDatos()
{
  string nombre, apellido, carrera, nombreArchivo;
  int edad;
  char r;
  ofstream archivo;
  cout<<"\nIngrese el nombre del archivo: ";
  getline(cin,nombreArchivo);
  archivo.open(nombreArchivo);
  do 
  {
    cout<<endl;
    cout<<"\t Ingrese el nombre: ";
    getline(cin,nombre); 
    cout<<"\t Ingrese el apellido: ";
    getline(cin,apellido); 
    cout<<"\t Ingrese la carrera: ";
    getline(cin,carrera);
    cout<<"\t Ingrese la edad: ";
    cin>>edad;

    archivo<<nombre<<" "<<apellido<<" "<<carrera<<" "<<edad<<endl;
    cout<<"\nDesea ingresar otro contacto? s.Si o n.No: ";
    cin>>r;
    cin.ignore();
  }
  while(r=='s');
  archivo.close();
}

void mostrarDatos()
{
  string nombre, apellido, carrera, nombreArchivo, texto;
  int edad;

  ifstream archivoLectura;
  cout<<"\nIngrese el nombre del archivo que desea leer: ";
  getline(cin,nombreArchivo);
  archivoLectura.open(nombreArchivo,ios::in);
  
  while(!archivoLectura.eof())
  {
    archivoLectura>>nombre>>apellido>>carrera>>edad;

    if(!archivoLectura.eof())
    {
      cout<<endl;
      cout<<"*********************************";
      cout<<"\nNombre: "<<nombre<<endl;
      cout<<"\nApellido: "<<apellido<<endl;
      cout<<"\nCarrera: "<<carrera<<endl;
      cout<<"\nEdad: "<<edad<<endl;
      cout<<endl;
       cout<<"*********************************";
    }
  }
  archivoLectura.close();
}