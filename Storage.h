/* 
 * Contributers: Jonathan Salvato
 * 9/25/24
 * Purpose: Storage Data Type, points to several shelf data types and allows for creation and destruction of shelves. 
 */
#include "Shelf.h"
class Storage{
    private:
        //internal variables
        int size;
        Shelf** stg;
    public:
    Storage(){
        size = 1;
        stg = new Shelf*[size];
    }
    ~Storage(){
        delete stg;
    }
<<<<<<< Updated upstream
=======

    //function Prototypes
>>>>>>> Stashed changes
    Storage(int);
    Storage(int, Shelf[]);
    void setMedia(int, Shelf&);
    void changeSize(int);
    void delShelf(int);
    Shelf getShelf(int);
    int getSize();
    void printStorage();
};