#include <iostream>
#include <string>

using namespace std;

int opcion, i;
string Paciente, Hora, Tratamiento, Descripcion, PUtratamiento, Cantidad, PrecioUnitario, Total;

void main()
{
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

		case 1:
			i = i + 1;

			cout << "El numero de su cita es: " << i << endl;

			cout << "Ingrese el nombre del paciente" << endl;
			cin >> Paciente;

			cout << "Ingrese la hora de la cita" << endl;
			cin >> Hora;

			cout << "Ingrese el Nombre del Tratamiento" << endl;
			cin >> Tratamiento;

			cout << "Ingrese la descripcion" << endl;
			cin >> Descripcion;

			cout << "Ingrese el Precio Unitario del Tratamiento" << endl;
			cin >> PUtratamiento;

			cout << "Ingrese la Cantidad de Tratamiento" << endl;
			cin >> Cantidad;

			cout << "Ingrese el Precio Unitario" << endl;
			cin >> PrecioUnitario;

			cout << "Ingrese el Total" << endl;
			cin >> Total;

			cout << "Cita agendada correctamente" << endl;
			break;

		case 6:
			return;
			break;
		default:
			cout << "Favor de ingresar una de las opciones" << endl;
			break;

		}

	}
}
