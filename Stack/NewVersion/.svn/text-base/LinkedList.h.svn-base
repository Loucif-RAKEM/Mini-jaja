#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Link.h"
#include <sstream>

void die(string error);

template<typename T>
class LinkedList{

    public:
        LinkedList(){
            first = NULL;
            last = NULL;
            length = 0;
        }

        ~LinkedList(){
            if(first != NULL){
                Link<T>* toDeleteElement = first;
                Link<T>* nextElement = first->getNextElement();
                while(nextElement != NULL){
                    delete toDeleteElement;
                    toDeleteElement = nextElement;
                    nextElement = nextElement->getNextElement();
                }
                delete toDeleteElement;
            }
        }

        void insertBefore(const T& value){
            insertAt(0, value);
        }

        void insertAfter(const T& value){
            insertAt(length, value);
        }

        void insertAt(const unsigned int index, const T& value){
            if(index == 0){
                first = new Link<T>(value, first);
                if(last == NULL) last = first;
                ++length;
            }else if(index == length){
                last->setNextElement(new Link<T>(value));
                last = last->getNextElement();
                ++length;
            }else if(index < length){
                unsigned int counter = 0;
                Link<T>* element = first;
                while(counter < index - 1){
                    element = element->getNextElement();
                    ++counter;
                }
                element->setNextElement(new Link<T>(value, element->getNextElement()));
                ++length;
            }else{
                stringstream error;
                error << "In function void LinkedList::insertAt(const unsigned int, const T&) : unable to append an element at index " << index << " because the size of the list is " << length << ".";
                die(error.str());
            }
        }

        void removeFirst(){
            removeAt(0);
        }

        void removeLast(){
            removeAt(length - 1);
        }

        void removeAt(unsigned int index){
            if(first != NULL){
                if(index == 0){
                    Link<T>* toDeleteElement = first;
                    if(last == first) last = first->getNextElement();
                    first = first->getNextElement();
                    delete toDeleteElement;
                    --length;
                }else if(index < length){
                    unsigned int counter = 0;
                    Link<T>* element = first;
                    while(counter < index - 1){
                        element = element->getNextElement();
                        ++counter;
                    }
                    Link<T>* toDeleteElement = element->getNextElement();
                    element->setNextElement(toDeleteElement->getNextElement());
                    delete toDeleteElement;
                    if(index == length - 1) last = element;
                    --length;
                }else{
                    stringstream error;
                    error << "In function void LinkedList::removeAt(const unsigned int, const T&) : unable to remove element at index " << index << " because the size of the list is " << length << ".";
                    die(error.str());
                }
            }else{
                stringstream error;
                error << "In function void LinkedList::removeAt(const unsigned int, const T&) : unable to remove element at index " << index << " because the list is empty.";
                die(error.str());

            }
        }

        const Link<T>* getFirst() const{
            return first;
        }

        Link<T>* elementAt(const unsigned int index) const{
            if(index < length){
                Link<T>* element = first;
                unsigned int counter = 0;
                while(counter < index){
                    element = element->getNextElement();
                    ++counter;
                }
                return element;
            }else{
                stringstream error;
                error << "In function void LinkedList::elementAt(const unsigned int) : unable to access element at index " << index << " because the size of the list is only " << length << ".";
                die(error.str());

            }

        }

        void swapElements(const unsigned int indexFirst, const unsigned int indexSecond){
            if(indexFirst > indexSecond) swapElements(indexSecond, indexFirst);
            else{
                if(length >= 2 && indexFirst < length && indexSecond < length){
                    if(indexFirst != indexSecond){
                        if(indexFirst != 0){
                            Link<T>* beforeFirst = elementAt(indexFirst - 1);
                            Link<T>* tmpFirst = beforeFirst->getNextElement();
                            Link<T>* afterFirst = tmpFirst->getNextElement();
                            Link<T>* beforeSecond = elementAt(indexSecond - 1);
                            Link<T>* tmpSecond = beforeSecond->getNextElement();
                            Link<T>* afterSecond = tmpSecond->getNextElement();
                            if(indexFirst + 1 == indexSecond){
                                tmpSecond->setNextElement(tmpFirst);
                            }else{
                                tmpSecond->setNextElement(afterFirst);
                                beforeSecond->setNextElement(tmpFirst);
                            }
                            tmpFirst->setNextElement(afterSecond);
                            beforeFirst->setNextElement(tmpSecond);
                            if(indexSecond == length - 1) last = tmpFirst;
                        }else{
                            Link<T>* afterFirst = first->getNextElement();
                            Link<T>* beforeSecond = elementAt(indexSecond - 1);
                            Link<T>* tmpSecond = beforeSecond->getNextElement();
                            Link<T>* afterSecond = tmpSecond->getNextElement();
                            if(indexFirst + 1 == indexSecond){
                                tmpSecond->setNextElement(first);
                            }else{
                                tmpSecond->setNextElement(afterFirst);
                                beforeSecond->setNextElement(first);
                            }
                            first->setNextElement(afterSecond);
                            if(indexSecond == length - 1) last = first;
                            first = tmpSecond;
                        }
                    }
                }else{
                    stringstream error;
                    error << "In function void LinkedList::swapElements(const unsigned int, const unsigned int) : unable to swap elements at index " << indexFirst << " and " << indexSecond << " because the size of the list is only " << length << ".";
                    die(error.str());
                }
            }
        }

        const unsigned int getLength() const{
            return length;
        } 

        void display() const{
            Link<T>* element = first;
            cout << "---------------------------------------------" << endl;
            cout << first << " --> ... --> " << last << endl;
            cout << "---------------------------------------------" << endl;
            while(element != NULL){
                element->display();
                element = element->getNextElement();
            }
            cout << "---------------------------------------------" << endl;
        }

    private:
        unsigned int length;
        Link<T>* first;
        Link<T>* last;

};

#endif
