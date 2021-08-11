#include "Merchant.h"
#include <iostream>
#include <string>
#include <vector>
#include "Banka.h"


Merchant::Merchant (string id, string name, string registrationtime, string terminalID, string cihaz, string tcKimlikNo,
vector<Banka> anlasmalilar, string password){

this->id = id;
this->name = name;
this->registrationtime =registrationtime;
this->terminalId =terminalId;
this->cihaz = cihaz;
this->tcKimlikNo = tcKimlikNo;
this->anlasmalilar = anlasmalilar; 
this->password = password;
}

void Merchant::print() {

cout <<this->id << endl;
cout << this-> name << endl;
cout << this-> registrationtime << endl;
cout << this-> terminalId << endl;
cout << this-> cihaz << endl;
cout << this-> tcKimlikNo << endl;
cout << this-> password << endl;

for (int i = 0; i < anlasmalilar.size(); i++) {
    cout << (anlasmalilar.at(i).to_string());

}
cout << " " << endl;
}

void Merchant::bankaEkle(Banka banka) {
    this->anlasmalilar.push_back(banka);
}

void Merchant::bankaCikar(string id) {
    vector<Merchant>anlasmalilar;
    for (vector<Merchant>::iterator it= anlasmalilar.begin(); it !=anlasmalilar.end(); ++it){
        if (it->getID() == id) {
            anlasmalilar.erase(it);
            break;
        }
    }

}
//  : banka modu tanınmalı // 
void Merchant::bankaMod(string id) {
    for (int i = 0; i < anlasmalilar.size(); i++) {
        Banka banka = anlasmalilar.at(i);
        if (banka.getID() == id) {
            banka.setMode(!banka.getMode());   
            break;
        }
    }
}

string Merchant::getID() {
    return this->id;
}
//  : fonksiyon isimleri ayn� / de�i�tirlmeli
string Merchant::getname() {
    return this->name;
}

string Merchant::getregistrationtime() {
    return this->registrationtime;
}

string Merchant::getterminalID() {
    return this->terminalId;
}

string Merchant::getcihaz() {
    return this->cihaz;
}
string Merchant::gettcKimlikNo() {
    return this->tcKimlikNo;
}

string Merchant::getpassword() {
    return this->password;
}

