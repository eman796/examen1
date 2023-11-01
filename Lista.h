//
// Created by emanu on 31/10/2023.
//

#ifndef EXAMEN1_LISTA_H
#define EXAMEN1_LISTA_H


class Lista {
public:
    void agregar(){
        std::string titulo ="";
        char desc = char(250);
        std::string tareaCompletada = "";
        std::string fechaRegistro ="";
        char fechacom = char(250);
        std::cout <<"Ingrese el nombre que desea ponerle a la tarea (Título)";
        std::cin>>titulo;
        std::cout <<"Ingresa la descripcion de la tarea (De que trata y eso)" << std::endl;
        std::cin>>desc;
        std::cout <<"Ingrese la fecha de registro de la tarea"<< std::endl;
        std::cin>>fechaRegistro;
        std::cout <<"Ingrese la tarea completadas"<< std::endl;
        std::cin>>tareaCompletada;
        std::cout <<"Ingrese la fecha en que la tarea se completó"<< std::endl;
        std::cin>>fechacom;
    }

    void EliminarDatos() {

    }

    void ListarTodo() {

    }
};


#endif //EXAMEN1_LISTA_H
