#include<iostream>
using namespace std;

class Hero {
    // properties
    private: 
        int health;
    public:
        char level;

    /* if there is empty class which have no properties then the size
     of class will be 1 */

     // getters and setters
     // setters 
    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
    // getter
     int getHealth(){
        return health;
     }

     char getLevel()
     {
        return level;
     }
};

int main()
{
    // static allocation
    Hero h1;
    cout << "-----Static Allocation---";
    cout << endl;
    h1.setLevel('A');
    h1.setHealth(80);

    cout << "Level is " << h1.level <<endl;
    cout << "Health is " << h1.getHealth();
    cout << endl;
    // dynamic allocation
    cout << "----- Dynamic Allocation---";
    cout << endl;
    Hero *h = new Hero;
    (*h).setLevel('A');
    (*h).setHealth(90);
    cout << "level is " << (*h).level << endl;
    cout << "Health is " << (*h).getHealth() << endl;

    //  // alternative way
    h->setLevel('B');
    h->setHealth(8);
    cout << "level is " << h->level << endl;
    cout << "health is " << h->getHealth() << endl;


    // cout << sizeof(h);
}