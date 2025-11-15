#ifndef CARJAR_H
#define CARJAR_H

#include <iostream>
#include <string>


class Engine {
public:
    std::string type;
    double volume;
    int horsepower;

    Engine(const std::string& type, double volume, int horsepower);
    void start() const;
};

class Car {
public:
    std::string m_name;
    std::string m_model;
    std::string m_color;
    int m_year;
    Engine engine;


    Car(const std::string& name, const std::string& model, const std::string& color, int year,const Engine& eng);

    void start() const;
};

class BMW : public Car {
public:
    BMW(const std::string& model,const std::string& color,int year,const Engine& eng);

    void start() const ;
};


class Mercedes : public Car {
public:
    Mercedes(const std::string& model,const std::string& color,int year,const Engine& eng);

    void start() const ;
};


class Audi : public Car {
public:
    Audi(const std::string& model,const std::string& color,int year,const Engine& eng);

    void start() const ;
};

#endif
