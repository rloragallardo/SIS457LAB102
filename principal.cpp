#include<iostream>
using namespace std;
int op;
int main() {
	do {
	cout << "Mi nombre es Rolando Lora Gallardo,nací en Sucre Bolivia,el 9 de Marzo del 2003.Tuve una formacion academica en el Colegio Don Bosco siempre me encamine por la tecnología porque hoy en día es de vital importancia;estudio ingenieria de sistemas en la universidad San Francisco Xavier de Chuquisaca, ahora estoy cursando el tercer semestre"<<endl;
	cout << "¿Desea volver a reproducir la biografia?\n1.SI   2.NO" << endl;
		cin >> op;
	} while (op==1);
	system("pause");
	return 0;
}