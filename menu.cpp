#include <iostream>
#include "Lista.h"
Lista lis;
int main() {
int opcion;
int argumrnto = 0;
while (opcion !=4) {
    system("cls");
    system("color 2");
    std::cout << "Exámen 1 estructura de datos\n"
                 "1. Insertar datos\n"
                 "2.Eliminar datos\n"
                 "3. Listar los datos\n"
                 "4. Salir\n"
                 "Digite una opción\n";
    std::cin >> opcion;
    switch (opcion) {
        case 1:
            lis.agregar();
            break;
        case 2:
            lis.EliminarDatos();
            break;
        case 3:
            lis.ListarTodo();
            break;
        case 4:
            std::cout <<"Saliendo del sistema";
            system("exit");
    }
}
}
