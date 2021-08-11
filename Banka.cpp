#include "Banka.h"
#include <iostream>
#include <string>



Banka::Banka(string BankId, string ad, bool mode){
    this->BankId = BankId;
    this->ad = ad;
    this->mode = mode;
}

string Banka::getAd(){
    return this->ad;
}

void Banka::print() {

    cout << this->ad << endl;
    cout << this->mode << endl;
}

string Banka::to_string() {
    return this->ad; 
}


void Banka::setMode(bool modeInput) {
     this->mode = modeInput;
}

void Banka::setAd(string AdInput) {
    this->ad = AdInput;

}

string Banka::getID() {
    return this->BankId;

}
bool Banka::getMode() {

    return this->mode;


}