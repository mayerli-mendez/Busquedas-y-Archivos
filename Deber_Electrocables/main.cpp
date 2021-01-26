#include <iostream>
using namespace std;
#include <stdio.h>

int main(void) {

  int numPtos=0, numconct=0;
  char nomIns[20];
  float distPtos=0, distTotal=0, distotalImp, precioo, totalMaterial=0, ganancia=0, totalPagar=0, preciocab=0, pconect=0,costocab=0;
    cout<<"\t\t****BIENVENIDOS A LA EMPRESA DE ELECTROCABLES****\n\n";
    cout<<"\t\tEste es un sofware contable\n\n";
    cout<<"\nIngrese el nombre del lugar de la instalacion";
    cin>>nomIns;
    cout<<"\nIngrese el numero de puntos de red que van a ser instalados:";
    cin>>numPtos;

      for (int i= 1; i<= numPtos; i++)
      {
        cout<<"\nPunto de red "<< i;
        cout<<"\nIngrese la distancia entre el conector del punto de red hasta el equipo de conectividad: ";
        cin>>distPtos;
        cout<<"\nIngrese el número de conectores para el punto de red:";
        cin>>numconct;

        distPtos=distPtos*numconct;
        distTotal = distTotal + distPtos;

        pconect= (numconct* 0.15)+(numconct *0.35);
        preciocab=(preciocab+pconect);

      }

      distotalImp= (distTotal*5)/100;
      preciocab=(preciocab*numPtos);
      precioo=(preciocab*15)/100;
      costocab= distTotal*0.90;
      totalMaterial= costocab+preciocab+precioo;
      ganancia=totalMaterial*0.45;
      totalPagar=totalMaterial+ganancia;
      cout<<"\n";
      cout<<"\t\tEl detalle de la instalación es la siguiente\n\n";
      cout<<"\nLa distancia total del cable utilizado en la instalación es:"<<distotalImp+distTotal;
      cout<<"\nEl costo del cable segun la categoria 5e es:"<<costocab;
      cout<<"\nEl precio total de los conectores RJ45 (hembra y macho) es: "<<preciocab+precioo;
      cout<<"\nLa total del material utilizado es:"<<totalMaterial;
      cout<<"\nLa ganancia es:"<<ganancia;
      cout<<"\nEl total a pagar por su instalacion es:"<<totalPagar;
}
