#include <iostream>
#include "Lista.h"
Lista lis;
int main() {
int opcion;
while (opcion !=4) {
    system("color 2");
    system("cls");
    std::cout << "Examen 1 estructura de datos\n"
                 "1. Insertar datos\n"
                 "2.Eliminar datos\n"
                 "3. Listar los datos\n"
                 "4. Salir\n"
                 "Digite una opcion\n";
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
