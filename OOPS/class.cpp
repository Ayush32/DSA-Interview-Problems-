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
    // object of Hero Type class
    Hero h1;
    // call the setter function
    h1.setHealth(5);
    h1.setLevel('A');
    cout << "health is : " << h1.getHealth();
    cout << endl;
    cout << "level is : " << h1.getLevel();

    // cout << "size : " << sizeof(h1) << endl;
    return 0;
}