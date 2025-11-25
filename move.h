#ifndef CLASSANIMAL_H
#define CLASSANIMAL_H

#include <iostream>
#include <string>
using namespace std;


class Animal {
protected:
    int* legs_quantity;
    string eat;
    string kind_of;
    string survive_method;
    int* max_year;
    double* max_weight;

public:
    Animal(int legs = 4, string eat_type = "meat", string kind = "carnivore",
           string survive = "hunting", int maxY = 0, double maxW = 0)
        : legs_quantity(legs), eat(eat_type), kind_of(kind), survive_method(survive),
          max_year(maxY), max_weight(maxW) 
    {
        legs_quantity = new int(legs);
        max_year = new int(maxY);
        max_weight = new double(maxW);
    }

    Animall(Animall&& other) {
        this -> legs_quantity = other.legs_quantity;
        legs_quantity = nullptr;

        this -> max_year = other.max_year;
        legs_quantity = nullptr;

        this -> max_year = other.max_year;
        max_year = nullptr;

    }



    Animal& operator=(Animal&& other) 
    {
        if (this != &other) 
        {

            delete legs_quantity;
            delete max_year;
            delete max_weight;

          
            legs_quantity = other.legs_quantity;
            max_year = other.max_year;
            max_weight = other.max_weight;

            
            other.legs_quantity = nullptr;
            other.max_year = nullptr;
            other.max_weight = nullptr;
        }
        return *this;
    }




    virtual ~Animal() 
    {
        delete legs_quantity;
        delete max_year;
        delete max_weight;
    } 



    
    virtual void print() const = 0;
};


class Tiger : public Animal {
public:
    Tiger();
    void print() const override;
};

class Wolf : public Animal {
public:
    Wolf();
    void print() const override;
};

class Lynx : public Animal {
public:
    Lynx();
    void print() const override;
};

class Bear : public Animal {
public:
    Bear();
    void print() const override;
};

class Lion : public Animal {
public:
    Lion();
    void print() const override;
};

class Leopard : public Animal {
public:
    Leopard();
    void print() const override;
};

#endif

