//
// Created by emanu on 31/10/2023.
//

#ifndef EXAMEN1_LISTA_H
#define EXAMEN1_LISTA_H


class Lista {
public:
    Lista();
    ~Lista();
    std::string datos;
    void agregar();

    void EliminarDatos() ;

    void ListarTodo();
};
Lista::Lista(){

};
Lista::~Lista(){

};
struct Tarea{;
    std::string titulo ="";
    std::string desc;
    std::string tareaCompletada = "";
    std::string fechaRegistro ="";
    std::string fechacom = "";

    struct Tarea *siguiente;
};
struct Tarea *PInicial, * PAux,*Pfin, *Tareas;
void Lista::agregar() {
    if (PInicial = NULL) {
        Tareas = new (Tarea);
        std::cout << "Ingrese el nombre que desea ponerle a la tarea (Título)\n";
        std::getline(std::cin, Tareas->titulo);
        Tareas->titulo = datos;
        std::cout << "Ingresa la descripcion de la tarea (De que trata y eso)\n" << std::endl;
        std::getline(std::cin, Tareas->desc);
        Tareas->desc = datos;
        std::cin.ignore();
        std::cout << "Ingrese la fecha de registro de la tarea\n" << std::endl;
        std::getline(std::cin, Tareas->fechaRegistro);
        Tareas->fechaRegistro = datos;
        std::cout << "Ingrese la tarea completadas\n" << std::endl;
        std::getline(std::cin, Tareas->tareaCompletada);
        Tareas->tareaCompletada = datos;
        std::cout << "Ingrese la fecha en que la tarea se completó\n" << std::endl;
        std::getline(std::cin, Tareas->fechacom);
        Tareas->fechacom = datos;
        Tareas ->fechacom = datos;
        Pfin = Tareas;
    }
    Tareas ->siguiente= NULL;
}

void Lista::EliminarDatos(){
PAux = PInicial;
if (PInicial = NULL){
    std::cout<<"No hay datos a borrar";
} else {
    delete(PInicial);
    PInicial = PAux;
    PAux = PInicial;
}
}
void Lista::ListarTodo() {
if(PInicial = NULL){
    std::cout << "No hay datos en la lista";
} else {
    PAux = Tareas;
    while(PAux!=NULL){
        std::cout << "Mostrando datos \n"
                     "Titulo de la tarea:\n " << PAux->titulo;
        std::cout<<"Descripcion de la tarea:\n" << PAux->desc;
        std::cout<<"Fecha de registros:\n" << PAux->fechaRegistro;
        std::cout<<"Tareas completadas"<<PAux->tareaCompletada;
        std::cout<<"Fecha de tareas completadas"<<PAux->fechacom;
        PAux ->siguiente;

    }
}
}

#endif //EXAMEN1_LISTA_H

