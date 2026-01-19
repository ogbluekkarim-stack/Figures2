#include<cstdlib>//
#include<iostream>
#define PIGRECO 3.141
using namespace std;
int main (){
	int arearettangolo;
	int areatriangolo;
	float areacerchio;
	int selezione;
	int base, altezza;
	int raggio;
	cout<<"questo programma serve per calcolare le aree di poligoni"<<endl;
	cout<<"inserisci 1 se vuoi calcolare l'area del rettangolo, 2 se vuoi calcolare l'area del triangolo, 3 se vuoi calcolare l'area del cerchio"<<endl;
	cin>>selezione;
	if (selezione==1){
		cout<<"Inserisci il valore della base:"<<endl;
		cin>>base;
		cout<<"Inserisci l'altezza:"<<endl;
		cin>>altezza;
		arearettangolo=base*altezza;
		cout<<"L'area del rettangolo e' uguale a:"<<arearettangolo<<endl;
	}
	else {
		if (selezione==2){
			cout<<"Inserisci il valore della base:"<<endl;
			cin>>base;
			cout<<"Inserisci l'altezza:"<<endl;
			cin>>altezza;
			areatriangolo=(base*altezza)/2;
			cout<<"L'area del triangolo e' uguale a:"<<areatriangolo<<endl;
		}
		else {
			if (selezione==3){
				cout<<"Inserisci il valore del raggio:"<<endl;
				cin>>raggio;
				areacerchio=raggio*raggio*PIGRECO;
				cout<<"L'area del cerchio e' uguale a:"<<areacerchio<<endl;
			}
		}
	}
}
