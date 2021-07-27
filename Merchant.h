#pragma once
#include <string>
#include <vector>
#include "Banka.h"
using namespace std;


class Merchant{
    private:
        string id;
        string name;
        string registrationtime;
        string terminalId;
        string cihaz;
        string tcKimlikNo;
        vector <Banka> anlasmalilar;
        string password;
    public:
        Merchant(string id, string name, string registrationtime, string terminalID, string cihaz, string tcKimlikNo,
        vector<Banka> anlasmalilar, string password);
        string getID();
        string getname();
        string getregistrationtime();
        string getterminalID();
        string getcihaz();
        string gettcKimlikNo();
        string getpassword();
        void bankaEkle(Banka banka);
        void bankaCikar(string id);
        void bankaMod(string id);
        void print();
        string to_string();
};