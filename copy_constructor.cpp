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
    Car(const Car& other)
    {
        m_name = other.m_name;
        m_model = other.m_model;
        m_color = other.m_color;
        m_year = other.m_year;
        m_eng_l = other.m_eng_l;

        
        
    }
    
    
    public:
    void print(){
        std::cout << "name = " << m_name << std::endl;
        std::cout << "model = " << m_model << std::endl;
        std::cout << "color = " << m_color << std::endl;
        std::cout << "year = " << m_year << std::endl;
        std::cout << "eng_l = " << m_eng_l << std::endl;
        
        
        
        std::cout  << std::endl;
    }
    
    
  
};

int main(int argc, char* argv[])
{
   
  Car Bmw("BMW", "M5 F10", "MONTE CARLO", 2016, "4.4");
  Bmw.print();
  
  Car Bmw2 = Bmw; 
  std::cout << "copy"<< std::endl;
  Bmw2.print();
  
  
  
  
    return 0;
}