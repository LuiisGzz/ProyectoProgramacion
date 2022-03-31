#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

struct dentistas
{

	char Paciente[30], Hora[30], Tratamiento[30], Descripcion[30], PUtratamiento[30], Cantidad[30], PrecioUnitario[30], Total[30];
}citas[4];

int main()
{

	int i = 0, opcion;

	while (1 == 1) {
		cout << "Bienvenido" << endl;
		cout << "Citas Dentales" << endl;
		cout << "Seleccione una de las siguientes opciones" << endl;
		cout << "1) Agendar Cita" << endl;
		cout << "2) Modificar Cita" << endl;
		cout << "3) Eliminar Cita" << endl;
		cout << "4) Lista de Citas Vigentes" << endl;
		cout << "5) Limpiar Pantalla" << endl;
		cout << "6) Salir" << endl;
		cin >> opcion;

		switch (opcion)
		{

		case 1: {
			i = i + 1;

			cout << "El numero de su cita es: " << i << endl;

			cout << "Ingrese el nombre del paciente" << endl;
			cin.ignore();
			fgets(citas[i].Paciente, 30, stdin);

			cout << "Ingrese la hora de la cita" << endl;
			fgets(citas[i].Hora, 30, stdin);

			cout << "Ingrese el Nombre del Tratamiento" << endl;
			fgets(citas[i].Tratamiento, 30, stdin);

			cout << "Ingrese la descripcion" << endl;
			fgets(citas[i].Descripcion, 30, stdin);

			cout << "Ingrese el Precio Unitario del Tratamiento" << endl;
			fgets(citas[i].PUtratamiento, 30, stdin);

			cout << "Ingrese la Cantidad de Tratamiento" << endl;
			fgets(citas[i].Cantidad, 30, stdin);

			cout << "Ingrese el Precio Unitario" << endl;
			fgets(citas[i].PrecioUnitario, 30, stdin);

			cout << "Ingrese el Total" << endl;
			fgets(citas[i].Total, 30, stdin);

			cout << "Cita agendada correctamente" << endl;
			break;
		}

		case 4: {
			for (int i = 1; i < 4; i++)
			{
				cout << "Cita numero " << i << endl;
				cout << "Paciente: " << citas[i].Paciente << endl;
				cout << "Hora: " << citas[i].Hora << endl;
				cout << "Tratamiento: " << citas[i].Tratamiento << endl;
				cout << "Descripcion: " << citas[i].Descripcion << endl;
				cout << "Precio Unitario: " << citas[i].PUtratamiento << endl;
				cout << "Cantidad:" << citas[i].Cantidad << endl;
				cout << "Precio Unitario del Tratamiento: " << citas[i].PrecioUnitario << endl;
				cout << "Total: " << citas[i].Total << endl;

			}
			break;
		}
		case 6:
			exit(EXIT_SUCCESS);;
			break;
		default:
			cout << "Favor de ingresar una de las opciones" << endl;
			break;

		}

	}
}
