//
// Created by emanu on 31/10/2023.
//

#ifndef EXAMEN1_LISTA_H
#define EXAMEN1_LISTA_H


class Lista {
public:
    Lista();
    ~Lista();
    void agregar();

    void EliminarDatos() ;

    void ListarTodo();
};
Lista::Lista(){

};
Lista::~Lista(){

};
struct Tarea{
    std::string titulo ="";
    std::string desc;
    std::string tareaCompletada = "";
    std::string fechaRegistro ="";
    std::string fechacom = "";
    struct Tarea *siguiente;
};
struct Tarea *Nodo_Siguiente, * Nodo_Anterior, *Tareas;
void agregar(){
    Tareas = new (Tarea);
    std::cout <<"Ingrese el nombre que desea ponerle a la tarea (Título)\n";
    std::getline(std::cin,Tareas->titulo);
    std::cout <<"Ingresa la descripcion de la tarea (De que trata y eso)\n" << std::endl;
    std::getline(std::cin,Tareas->desc);
    std::cin.ignore();
    std::cout <<"Ingrese la fecha de registro de la tarea\n"<< std::endl;
    std::getline(std::cin,Tareas->fechaRegistro);
    std::cout <<"Ingrese la tarea completadas\n"<< std::endl;
    std::getline(std::cin,Tareas->tareaCompletada);
    std::cout <<"Ingrese la fecha en que la tarea se completó\n"<< std::endl;
    std::getline(std::cin,Tareas->fechacom);
}
void EliminarDatos(){

}
void ListarDatos(){

}

#endif //EXAMEN1_LISTA_H
