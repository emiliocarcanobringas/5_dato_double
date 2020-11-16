/*Tipos de datos b�sicos de C++. Este programa muestra en la salida est�ndar una variable de tipo 
double, mejora la precisi�n con respecto a variables de tipo coma flotante o float que se utilizan
tambi�n para n�meros reales. El rango m�ximo de n�meros que puede leer es 1.7E+308 y el m�nimo 1.7E-308,
utiliza 8 bytes en memoria para almacenar los datos*/

#include <iostream>//Librer�a est�ndar de entrada o salida de datos
#include <locale.h>//Librer�a est�ndar para localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	double muygrande = 32.876;//Definiendo la constante
	char Textodeprueba[7] = "n�mero";//Declaro una cadena indicando el n�mero de caracteres m�s el car�cter nulo que indica el fin de la cadena: "0"
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librer�a y colocamos el valor de manejo de caracteres
	
	cout<<"Este es un ejemplo de constante del tipo double"<<endl; //Imprimo este mensaje en pantalla
	cout<<"la precisi�n de estos n�meros es el doble que la precisi�n de los tipo float"<<endl;//Imprimo este mensaje en pantalla
	cout<<muygrande<<endl;//Imprimiendo la constante
	cout<<Textodeprueba<<endl;//Imprimo la cadena con acento para la prueba
	
	return 0;//Finalizamos el programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas */
