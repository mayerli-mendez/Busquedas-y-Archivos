#include <iostream>
using namespace std;
#define tamanio(a) (sizeof (a)/sizeof(a[0]));
#include<fstream>

void Busqueda(int arr[],int t,int dato);

void algBurbuja(int arr[],int t);

int dato;

int main() {

  int arr[]={2,3,5,1,7,8,10,4,6,9};
  ofstream binario;
  binario.open("binario.txt", ios::app);
  cout <<"\nEl tamaño del arreglo es : "<<tamanio(arr);
  cout<<endl;

  binario<<"\nEl tamaño del arreglo es : "<<tamanio(arr);
  binario<<endl;

  int t=tamanio(arr);
  cout<<"\nIngrese el numero a buscar del 1-10 : ";
  cin>>dato;
  
  binario<<"\nNumero ingresado por el usuario : "<<dato; 
  binario<<endl;
  if (dato<=10)
  {
    algBurbuja(arr,t);
    Busqueda(arr,t,dato);
  }

  if (dato>10)
  {
    cout<<"\nNo hay es elemento "<<endl;
    binario<<"\nNo hay ese elemento ";
  }

}

void Busqueda(int arr[],int t,int dato)
{
  ofstream binario;
  binario.open("binario.txt", ios::app);

  int b,i,j,k;
   i=0; //posicion inicial
   j=t-1; //posicion final
   b=dato; //numero a buscar 

   do 
   {
     k=(i+j)/2;

     if (arr[k]<=b) //{1,2,3,4,5,6,7,8,9}
     {
      i=k+1; //5,6,7,8,9
     }
     if (arr[k]>=b)
     {
       j=k-1; //1,2,3,4
     }
   }while (i<=j);
   
   cout<<"\nElemto a buscar "<<dato;
   binario<<"\nElemto a buscar "<<dato;
   binario<<endl;
   cout<<endl;
   cout<<"\nEl elemento si existe  "<<arr[k];
   binario<<"\nEl elemento si existe  "<<arr[k];
   binario<<endl;
   binario.close();
}

void algBurbuja(int arr[],int t)
{
     int aux;
    for (int i=0 ; i<t ; i++)
    {
        for(int j=i+1 ; j<t ; j++)
        {
            if(arr[j]<arr[i])
            {
                aux=arr[i];

                arr[i]=arr[j];

                arr[j]=aux;

            }

        }
    }

}

