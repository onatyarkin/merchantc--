#pragma once 

#include <iostream>
#include <vector>
#include "Merchant.h"

using namespace std;

class Merchants {
    private:
        vector<Merchant> merchants;
    public:
        Merchants();
        void addMerchant(Merchant merchant);
        void print();
        void removeMerchant(string id);
        Merchant at(int index);
};