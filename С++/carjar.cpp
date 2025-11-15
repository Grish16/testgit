#include "carjar.h"


Engine::Engine(const std::string& type, double volume, int horsepower)
    : type(type), volume(volume), horsepower(horsepower) {}

void Engine::start() const {
    std::cout << "Engine: " << type << ", " << volume << "L, " << horsepower << " HP" << std::endl;
    std::cout << std::endl;
}


Car::Car(const std::string& name,const std::string& model,const std::string& color,int year,const Engine& eng)
    : m_name(name), m_model(model), m_color(color), m_year(year), engine(eng) {}

void Car::start() const {
    std::cout << "Car Info  " << std::endl;
    std::cout << "  Name:  " << m_name << std::endl;
    std::cout << "  Model: " << m_model << std::endl;
    std::cout << "  Color: " << m_color << std::endl;
    std::cout << "  Year:  " << m_year << std::endl;
    engine.start();
}


BMW::BMW(const std::string& model,const std::string& color, int year, const Engine& eng)
    : Car("BMW", model, color, year, eng) {}

void BMW::start() const {
    
    std::cout << "        BMW START" <<std::endl;
    std::cout << std::endl;
    Car::start();
}


Mercedes::Mercedes(const std::string& model,
                   const std::string& color,
                   int year,
                   const Engine& eng)
    : Car("Mercedes", model, color, year, eng) {}

void Mercedes::start() const {
    std::cout <<"         Mercedes START"<<std::endl;
    std::cout << std::endl;
    Car::start();
}


Audi::Audi(const std::string& model,
           const std::string& color,
           int year,
           const Engine& eng)
    : Car("Audi", model, color, year, eng) {}

void Audi::start() const {
    std::cout << "         Audi START" << std::endl;
    std::cout << std::endl;
    Car::start();
}

int main() {
    Engine eng1("V8 Twin Turbo", 4.4, 560);
    Engine eng2("V6 Biturbo", 3.0, 430);
    Engine eng3("V8 Turbo", 4.0, 500);

    BMW bmw("M5 F10", "Blue", 2016, eng1);
    Mercedes merc("E63 AMG", "Black", 2018, eng2);
    Audi audi("RS7", "Red", 2020, eng3);

    bmw.start();
    merc.start();
    audi.start();

    return 0;
}
