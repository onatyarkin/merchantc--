#ifndef BANK_BANKA_H
#define BANK_BANKA_H

#include <string>
#include <iostream>

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
        void setMode(bool modeInput);
        void setAd(string AdInput);
        void print();
};
#endif 