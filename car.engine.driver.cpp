#include <iostream>
#include <string>



class Engine {
public:
    std::string type;
    double volume; // liters
    int horsepower;

    Engine(const std::string& type, double volume, int horsepower)
        : type(type), volume(volume), horsepower(horsepower) {}

    void start() const {
        std::cout << "Mator - " << type 
             << ", litr - " << volume 
             << "L, " << horsepower << " HP" << std::endl;
    }
};


class Driver {
public:
    std::string name;
    int tar; 

    Driver(const std::string& name, int tar)
        : name(name), tar(tar) {}

    void drive() const {
        std::cout <<  "Varord " <<name << ":" << " varordakan porc " << tar << " tari" <<  std::endl;
    }
};


class Car {
private:
    std::string m_name;
    std::string m_model;
    std::string m_color;
    int m_year;
    Engine engine;    
    Driver* driver;   

public:
    Car(const std::string& name, const std::string& model, const std::string& color,
        int year, const Engine& eng)
        : m_name(name), m_model(model), m_color(color), m_year(year), engine(eng), driver(nullptr) {}

    void var(Driver* d) {
        driver = d;
    }

    void start() {
        std::cout << "Car Info:" << std::endl;
        std::cout << "  Name:  " << m_name << std::endl;
        std::cout << "  Model: " << m_model << std::endl;
        std::cout << "  Color: " << m_color << std::endl;
        std::cout << "  Year:  " << m_year << std::endl;

        engine.start();

       
    }
};


int main() {
    Engine eng("V8 Twin Turbo", 4.4, 560);
    Driver drv("Grish", 5);

    Car bmw("BMW", "M5 F10", "Monte Carlo", 2016, eng);
    bmw.var(&drv);

    bmw.start();
    drv.drive();

    return 0;
}
