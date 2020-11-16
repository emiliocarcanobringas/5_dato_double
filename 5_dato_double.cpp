/*Tipos de datos básicos de C++. Este programa muestra en la salida estándar una variable de tipo 
double, mejora la precisión con respecto a variables de tipo coma flotante o float que se utilizan
también para números reales. El rango máximo de números que puede leer es 1.7E+308 y el mínimo 1.7E-308,
utiliza 8 bytes en memoria para almacenar los datos*/

#include <iostream>//Librería estándar de entrada o salida de datos
#include <locale.h>//Librería estándar para localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	double muygrande = 32.876;//Definiendo la constante
	char Textodeprueba[7] = "número";//Declaro una cadena indicando el número de caracteres más el carácter nulo que indica el fin de la cadena: "0"
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librería y colocamos el valor de manejo de caracteres
	
	cout<<"Este es un ejemplo de constante del tipo double"<<endl; //Imprimo este mensaje en pantalla
	cout<<"la precisión de estos números es el doble que la precisión de los tipo float"<<endl;//Imprimo este mensaje en pantalla
	cout<<muygrande<<endl;//Imprimiendo la constante
	cout<<Textodeprueba<<endl;//Imprimo la cadena con acento para la prueba
	
	return 0;//Finalizamos el programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas */
