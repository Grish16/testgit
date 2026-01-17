#include <iostream>

class pult {
public:
    virtual ~pult() {}

    virtual void TVOn() = 0;   
    virtual void TVOff() = 0;     
    virtual void dzaynBarcr() = 0;   
    virtual void dzaynCacr() = 0;  
    virtual void poxAliq(int poxAliq) = 0;
};

class TV : public pult {

private:
    bool miacvace;
    int dzayn;
    int aliq;

public:
    TV() : miacvace(true), dzayn(10), aliq(1) {}

    void TVOn() override {      
        if (!miacvace) {
            miacvace = true;
            std::cout << "herustacuycy hima miacvace" << std::endl;
        } else {
            std::cout << "herustacuycy miacvace" << std::endl;
        }
    }

    void TVOff() override {
        if (miacvace) {
            miacvace = false;
            std::cout << "herustacuycy hima anjatvace" << std::endl;
        } else {
            std::cout << "herustacuycy anjatvacer" << std::endl;
        }
    }

    void dzaynBarcr() override {
        if (miacvace) {
            dzayn++;
            std::cout << "dzayn: " << dzayn << std::endl;
        } else {
            std::cout << "herustacuycy anjatvace" << std::endl;
        }
    }

    void dzaynCacr() override {
        if (miacvace) {
            if (dzayn > 0) dzayn--;
            std::cout << "dzayn: " << dzayn << std::endl;
        } else {
            std::cout << "herustacuycy anjatvace" << std::endl;
        }
    }

    void poxAliq(int ch) override {
        if (miacvace) {
            aliq = ch;
            std::cout << "aliqy poxvace: " << aliq << std::endl;
        } else {
            std::cout << "herustacuycy anjatvace" << std::endl;
        }
    }


};

int main() {

    TV tv;
    

    tv.TVOn();        
    tv.dzaynBarcr();
    tv.poxAliq(5);
    tv.dzaynCacr();
    tv.TVOff();

    return 0;
}
