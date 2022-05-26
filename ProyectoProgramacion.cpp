#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <ctype.h>

using namespace std;

struct citasDentales
{
	char Paciente[50];
	int Citas = 1;
	char Tratamiento[50];
	char nombreTratamiento[50];
	char hora[50];
	char PUTratamiento[50];
	char cantidad[50];
	char precioUnitario[50];
	char Total[50];
	char correo[50];

}citas[100];
int main()
{
	int opcion, i = 0;



	while (1 == 1) {
		cout << "Bienvenido" << endl;
		cout << "Citas Dentales" << endl;
		cout << "Selecciona una de las siguientes opciones" << endl;
		cout << "1) Agendar Cita" << endl;
		cout << "2) Modificar Cita" << endl;
		cout << "3) Eliminar Cita" << endl;
		cout << "4) Lista de Citas Vigentes" << endl;
		cout << "5) Limpiar Pantalla" << endl;
		cout << "6) Guardar" << endl;
		cout << "7) Salir" << endl;
		cin >> opcion;

		switch (opcion)
		{

		case 1: {
			int is;
			i = i + 1;


			cout << "El numero de su cita es: " << i << endl;

			cout << "Ingrese el nombre completo del paciente" << endl;
			cin.ignore();
			fgets(citas[i].Paciente, 50, stdin);

			cout << "Ingrese la hora de la cita" << endl;
			fgets(citas[i].hora, 50, stdin);

			cout << "Ingrese el Nombre del Tratamiento" << endl;

			fgets(citas[i].nombreTratamiento, 50, stdin);

			cout << "Ingrese la descripcion" << endl;

			fgets(citas[i].Tratamiento, 50, stdin);

			cout << "Ingrese el Precio Unitario del Tratamiento" << endl;

			fgets(citas[i].PUTratamiento, 50, stdin);

			cout << "Ingrese la Cantidad de Tratamiento" << endl;

			fgets(citas[i].Tratamiento, 50, stdin);

			cout << "Ingrese el Precio Unitario" << endl;

			fgets(citas[i].precioUnitario, 50, stdin);

			cout << "Ingrese el Total" << endl;

			fgets(citas[i].Total, 50, stdin);

			cout << "Ingrese el correo del paciente" << endl;

		correo:
			cin.ignore();
			cin.getline(citas[i].correo, 50);

			for (int g = 0; g <= 100; g++) {
				is = citas[i].correo[g];
				if (isspace(is)) {
					cout << "Favor de no usar espacios en el correo" << endl;
					cout << "Ingrese el correo" << endl;
					goto correo;
				}

			}


			cout << "Cita agendada correctamente" << endl;



			break;
		}


		case 2: {
			int y;
			cout << "Que cita desea modificar" << endl;
			cin >> y;


			cout << "El numero de su cita es: " << y << endl;

			cout << "Ingrese el nombre completo del paciente" << endl;
			cin.ignore();
			fgets(citas[y].Paciente, 50, stdin);

			cout << "Ingrese la hora de la cita" << endl;
			fgets(citas[y].hora, 50, stdin);

			cout << "Ingrese el Nombre del Tratamiento" << endl;

			fgets(citas[y].nombreTratamiento, 50, stdin);

			cout << "Ingrese la descripcion" << endl;

			fgets(citas[y].Tratamiento, 50, stdin);

			cout << "Ingrese el Precio Unitario del Tratamiento" << endl;

			fgets(citas[i].PUTratamiento, 50, stdin);

			cout << "Ingrese la Cantidad de Tratamiento" << endl;

			fgets(citas[y].cantidad, 50, stdin);

			cout << "Ingrese el Precio Unitario" << endl;

			fgets(citas[y].precioUnitario, 50, stdin);

			cout << "Ingrese el Total" << endl;

			fgets(citas[y].Total, 50, stdin);

			cout << "Ingrese el correo del paciente" << endl;
			fgets(citas[y].correo, 50, stdin);



			cout << "Cita agendada correctamente" << endl;



			break;
		}
		case 3: 
		{


		case 4: {

			for (int a = 1; a <= i; ++a)
			{

				cout << "Cita numero: " << a << endl;
				cout << "Nombre del Paciente: " << citas[a].Paciente << endl;
				cout << "Correo del Paciente: " << citas[a].correo << endl;
				cout << "Hora de la cita: " << citas[a].hora << endl;
				cout << "Nombre del Tratamiento: " << citas[a].nombreTratamiento << endl;
				cout << "Descripcion del Tratamiento: " << citas[a].Tratamiento << endl;
				cout << "Precio Unitario del Tratamiento: " << citas[a].PUTratamiento << endl;
				cout << "Cantidad del Tratamiento: " << citas[a].cantidad << endl;
				cout << "Precio Unitario del Tratamiento: " << citas[a].precioUnitario << endl;
				cout << "Total: " << citas[a].Total << endl;

			}

			break;
		}





		case 5: {
			system("cls");
			break;
		}
		case 6: {
			ofstream TEXTO("CitasDentales.txt");
			for (int a = 1; a <= i; ++a) {
				TEXTO << "El numer0 de cita es: " << a << endl;
				TEXTO << "Nombre del Paciente: " << citas[a].Paciente << endl;
				TEXTO << "Correo del Paciente: " << citas[a].correo << endl;
				TEXTO << "Hora de la cita: " << citas[a].hora << endl;
				TEXTO << "Nombre del Tratamiento: " << citas[a].nombreTratamiento << endl;
				TEXTO << "Descripcion del Tratamiento: " << citas[a].Tratamiento << endl;
				TEXTO << "Precio Unitario del Tratamiento : " << citas[a].PUTratamiento << endl;
				TEXTO << "Cantidad del Tratamiento : " << citas[a].cantidad << endl;
				TEXTO << "Precio Unitario del Tratamiento: " << citas[a].precioUnitario << endl;
				TEXTO << "Total: " << citas[a].Total << endl;

			}
			break;
		}

		case 7:
			exit(EXIT_SUCCESS);
			break;
		default:
			cout << "Eliga una de las opciones" << endl;
			break;
		}
		}







	}
}
