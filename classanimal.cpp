#include "classanimal.h"
#include <iostream>
using namespace std;

animal_carnivore::animal_carnivore() {

   
}

animal_carnivore::~animal_carnivore() {
   
}

tiger::tiger() {
    
}

tiger::~tiger() {
   
}

void tiger::print_t() const {
    cout << "----Tiger info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max wheight: " << max_weight << "kg" << endl;
    cout << endl;
    cout << endl;
}


wolf::wolf() {

}

wolf::~wolf() {

}

void wolf::print_w() const {
    cout << "----Wolf info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max wheight: " << max_weight << "kg" << endl;
    cout << endl;
    cout << endl;
}


lynx::lynx() {

}

lynx::~lynx() {

}

void lynx::print_l() const {
    cout << "----Linx info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max wheight: " << max_weight << "kg" << endl;
    cout << endl;
    cout << endl;
}

bear::bear() {

}

bear::~bear() {

}

void bear::print_b() const {
    cout << "----Bear info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max wheight: " << max_weight << "kg" << endl;
    cout << endl;
    cout << endl;
}

lion::lion() {

}

lion::~lion() {

}

void lion::print_li() const {
    cout << "----Lion info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max wheight: " << max_weight << "kg" << endl;
    cout << endl;
    cout << endl;
}

leopard::leopard() {
  
}

leopard::~leopard() {

}

void leopard::print_le() const {
    cout << "----Leopard info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max wheight: " << max_weight << "kg" << endl;
    cout << endl;
    cout << endl;
}


int main() {
   
    tiger t;
    t.print_t();

    wolf w;
    w.print_w();

    lynx l;
    l.print_l();

    bear b;
    b.print_b();

    lion li;
    li.print_li();

    leopard le;
    le.print_le();





    return 0;
}
