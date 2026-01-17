#ifndef CLASSANIMAL_H
#define CLASSANIMAL_H

#include <iostream>
#include <string>  
using namespace std;

class animal_carnivore {

public:
   
    int legs_quantity = 4;

    string eat = "meat";
    string kind_of = "carnivore";
    string survive_method = "hunting";
    

    

    animal_carnivore();
    ~animal_carnivore();


  
};

class tiger: public animal_carnivore {
public:
    int max_year = 20;
    int max_weight = 300;

    tiger();
    ~tiger();

      void print_t() const;
};


class wolf: public animal_carnivore {
public:
    int max_year = 15;
    int max_weight = 103;

    wolf();
    ~wolf();

     void print_w() const;
};
 

class lynx: public animal_carnivore {
public:
    int max_year = 24;
    int max_weight = 48;
    lynx();
    ~lynx();

    void print_l() const;
};


class bear: public animal_carnivore {
public:
    int max_year = 35;
    int max_weight = 1200;

    bear();
    ~bear();

    void print_b() const;
};


class lion: public animal_carnivore{
public:
    int max_year = 30;
    int max_weight = 375;

    lion();
    ~lion();

    void print_li() const;
};


class leopard: public animal_carnivore {
public:
    int max_year = 23;
    int max_weight = 96;

    leopard();
    ~leopard();

    void print_le() const;
};


#endif 
