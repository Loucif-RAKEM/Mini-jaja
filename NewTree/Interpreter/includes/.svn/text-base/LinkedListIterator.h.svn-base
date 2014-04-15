#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H


template<typename T> class LinkedList;
template<typename T> class Link;

void die(std::string error);

template<typename T>
class LinkedListIterator{

    public:
        LinkedListIterator() : ll(NULL), currentItem(NULL){}

        ~LinkedListIterator(){
            // Should not delete ll !
        }

        LinkedList<T>* getLinkedList() const{
            return ll;
        }

        void setLinkedList(LinkedList<T>* ll){
            if(this->ll != NULL){
                delete ll;
                delete currentItem;
            }
            this->ll = ll;
            currentItem = ll->getFirst();
        }

        bool isEnd(){
            return currentItem == NULL;
        }

        T getNext(){
            if(currentItem != NULL){
                T tmpCurrentItem = currentItem->getValue();
                currentItem = currentItem->getNextElement();
                return tmpCurrentItem;
            }else{
                die("In function T LinkedListIterator::getNext() : unable to access next element because the end of the list was reached.");
                return NULL;
            }
        }

    private:
        LinkedList<T>* ll;
        Link<T>* currentItem;

};

#endif
