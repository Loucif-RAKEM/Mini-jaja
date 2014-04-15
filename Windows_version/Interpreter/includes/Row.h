#ifndef ROW_H
#define ROW_H

#include <stdlib.h>
#include <string>
#include "Quadruplet.h"

//void die(std::string error);

class Row   //represente un tableau
{
    public:

        Row(Type type, int length); // constructeur
        ~Row();                     // destructeur
        Type getType()const;       // retourne le type du tableau
        void setType(Type type);   // set le type du tableau
        int* getContent();         // retourne le tableau de valeur
        int getSize() const;
        void setSize(int value);


private:
        Type type;                 // type du tableau: pourra servir au controleur de type
        int* content;             // tableau contenu
        int size;
};

#endif // ROW_H
