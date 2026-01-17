
#include <iostream>

class Car
{
    public:
        std::string m_name;
        std::string m_model;
        std::string m_color;
        int m_year;
        std::string m_eng_l;
        
    public:
    Car(const std::string& name, const std::string& model, const std::string& color, int year,const std::string& eng_l)
    {
    m_name = name;
    m_model = model;
    m_color = color;
    m_year = year;
    m_eng_l = eng_l;
    }
    
    
    public:
    void print(){
        std::cout << "name = " << m_name << std::endl;
        std::cout << "model = " << m_model << std::endl;
        std::cout << "color = " << m_color << std::endl;
        std::cout << "year = " << m_year << std::endl;
        std::cout << "eng_l = " << m_eng_l << std::endl;
    }
    
};

int main(int argc, char* argv[])
{
   
  Car Bmw("BMW", "M5 F10", "MONTE CARLO", 2016, "4.4");
  Bmw.print();
    return 0;
}