#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float areli(float b, float h);
float nereyda(float l, float l1);

 main() {
	float m,r,b,h;
	int opc;
	cout<<"1) Triangulo"<<endl;
	cout<<"2) Cuadrado "<<endl;
	cout<<"3) Rombo    "<<endl;
	cout<<"4) Poligono regular"<<endl;
	cout<<"5) Romboide "<<endl;
	cout<<"6) Rectangulo"<<endl;
	cout<<"7) Trapecio"<<endl;
	cout<<"8) Paralelogramo"<<endl;
	
	cout<<"Seleccione la fugura"<<endl;
	cin>>opc;
	switch(opc){
	 case 1:
	 	cout<<"Base y altura";
	 	cin>>b>>h;
	 	cout<<"area: "<<areli(b,h);
     break;
	case 2:
	 	cout<<"Lado";
	 	cin>>b;
	 	cout<<"area: "<<nereyda(b,b);
     break;
	case 3:
	 	cout<<"Diagonal mayor y diagonal menor";
	 	cin>>b>>h;
	 	cout<<"area: "<<areli(b,h);
     break;
    case 4:
	 	cout<<"Perimetro y apotema";
	 	cin>>b>>h;
	 	cout<<"area: "<<areli(b,h);
    break;
    case 5:
	 	cout<<"Base menor y base mayor";
	 	cin>>b>>h;
	 	cout<<"area: "<<areli(b,h);
    break;
    case 6:
	 	cout<<"Base y altura";
	 	cin>>b>>h;
	 	cout<<"area: "<<nereyda(b,h);
    break;
    case 7:
	 	cout<<"Altura, base mayor, base menor";
	 	cin>>m>>b>>h;
	 	r=b+h;
	 	cout<<"area: "<<areli(m,r);
    break;
    case 8:
	 	cout<<"Base y altura";
	 	cin>>b>>h;
	 	cout<<"area: "<<nereyda(b,h);
    break;
    default:"No existe figura";
	}
	getch();
}

float areli(float b, float h){
	float a;
	a=(b*h)/2;
	return a;
}

float nereyda(float l, float l1){
	float a;
	a=l*l1;
	return a;
	
}



