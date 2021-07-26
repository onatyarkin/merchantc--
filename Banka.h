#include <string>
#include <iostream>
#ifndef BANK_BANKA_H
#define BANK_BANKA_H


using namespace std;

class Banka { 
    private:
        string BankId;
        string ad;
        bool mode;
    public:
        Banka(string BankId, string ad, bool mode);
        string getID();
        string getAd();
        string to_string();
        bool getMode();
        void setMode();
        void setAd();
        void print();
};
#endif 