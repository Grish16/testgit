#include "classanimal.h"


Tiger::Tiger() : Animal(4, "Meat", "Carnivore", "Hunt", 20, 300) {}
void Tiger::print() const {
    cout << "----Tiger info----"<< endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat<< endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max weight: " << max_weight << "kg" << endl;
}
 

Wolf::Wolf() : Animal(4, "Meat", "Carnivore", "Hunt in packs", 15, 103) {}
void Wolf::print() const {
    cout << "----Wolf info----"<< endl;
    cout << "  Legs: " << legs_quantity  << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of  << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max weight: " << max_weight << "kg" << endl;
}


Lynx::Lynx() : Animal(4, "Meat", "Carnivore", "Hunt", 24, 48) {}
void Lynx::print() const {
    cout << "----Lynx info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max weight: " << max_weight << "kg" << endl;
}


Bear::Bear() : Animal(4, "Omnivore", "Carnivore/Herbivore", "Forage", 35, 1200) {}
void Bear::print() const {
    cout << "----Bear info----" << endl;
    cout << "  Legs: " << legs_quantity  << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max weight: " << max_weight << "kg" << endl;
}


Lion::Lion() : Animal(4, "Meat", "Carnivore", "Hunt in pride", 30, 375) {}
void Lion::print() const {
    cout << "----Lion info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max weight: " << max_weight << endl;
}


Leopard::Leopard() : Animal(4, "Meat", "Carnivore", "Hunt", 23, 96) {}
void Leopard::print() const {
    cout << "----Leopard info----" << endl;
    cout << "  Legs: " << legs_quantity << endl;
    cout << "  Eat: " << eat << endl;
    cout << "  Kind of: " << kind_of << endl;
    cout << "  Survive method: " << survive_method << endl;
    cout << "  Max year: " << max_year << endl;
    cout << "  Max weight: " << max_weight << "kg" << endl;
}




int main() {
    Tiger t;
    Wolf w;
    Lynx l;
    Bear b;
    Lion li;
    Leopard le;

    t.print();
    w.print();
    l.print();
    b.print();
    li.print();
    le.print();

    return 0;
}

