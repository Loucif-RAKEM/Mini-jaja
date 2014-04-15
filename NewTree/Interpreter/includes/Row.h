#ifndef ROW_H
#define ROW_H
#include "BinarySearchTree.h"
#include <stdlib.h>
#include <string>
class Row   //represente un tableau
{
    public:

        Row(std::string type,int length); // constructeur
        ~Row();                                 // destructeur
        std::string getType()const;       // retourne le type du tableau
        void setType(std::string type);   // set le type du tableau
        int* getContent();                // retourne le tableau de valeur

    private:
        std::string type;                 // type du tableau: pourra servir au controleur de type
        int* content;                     // tableau contenu
};

#endif // ROW_H
