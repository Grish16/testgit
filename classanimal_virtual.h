#ifndef CLASSANIMAL_H
#define CLASSANIMAL_H

#include <iostream>
#include <string>
using namespace std;


class Animal {
protected:
    int legs_quantity;
    string eat;
    string kind_of;
    string survive_method;
    int max_year;
    double max_weight;

public:
    Animal(int legs = 4, string eat_type = "meat", string kind = "carnivore",
           string survive = "hunting", int maxY = 0, double maxW = 0)
        : legs_quantity(legs), eat(eat_type), kind_of(kind), survive_method(survive),
          max_year(maxY), max_weight(maxW) {}

    Animal(Animal&& other) {
        this -> max_year = other.max_year;
        max_year = nullptr
    }

    virtual ~Animal() {} 



    
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
