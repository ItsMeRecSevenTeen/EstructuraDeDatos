#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define color SetConsoleTextAttribute
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
void imprime(int[]);
int iniManual(int[], int);
int iniAleatoria(int[], int);
int main(){
	int datos[20] = {0}, opc, upos = -1, n;
//	int largo = sizeof(datos)/sizeof(datos[0]);
//	cout << largo;
	while(true){
		color(hconsole,)cout << "Menu: Seleccione una opcion\n0.-Impresion\n1.-Inicializacion Manual\n2.-Inicializacion Aleatoria\n3.-Inicializacion de 1 a N";
		cin >> opc;
		switch(opc){
		case 0:
			imprime(datos);
			break;
			case 1:
				cout << "Cuantos datos quieres inicializar?: ";
				cin >> n;
				upos = iniManual(datos, n);
				break;
			case 2:
				cout << "Cuantos datos quieres inicializar?: ";
				cin >> n;
				upos = iniAleatoria(datos, n);
				break;
		default:
			cout << "Opcion invalida, intentelo de nuevo";
	}
	}
	return 0;
}

void imprime(int d[20]){
	int i;
	cout << "Contenido del arreglo\n";
	for(i = 0;i < 20 ; i++){
		cout << i << "\t" << d[i] << "\n";
	}
}
int iniManual(int d[20], int n){
	int i, up=-1;
	if(n>20){
		cout << "Se excede el tamano del arreglo\n";	
	}
	else{
		for(i = 0 ; i < n; i++){
			cout << "datos[" << i << "]: ";
			cin >> d[i];
		}
		up  = n-1;
		return up;
	}
}
int iniAleatoria(int d[20], int n){
	srand(time(NULL));
	int i, up = -1;
	if(n>20){
		cout << "Se excede el tamano del arreglo\n";	
	}
	for(i = 0 ; i < n; i++){
		d[i] = 1 + rand() % 100;
		}
		up  = n-1;
		return up;
}
