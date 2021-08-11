using namespace std;
#include "Merchants.h"

Merchants::Merchants() {
    this->merchants = vector<Merchant>();
}

void Merchants::addMerchant(Merchant merchant) {
    this->merchants.push_back(merchant);
}

void Merchants::removeMerchant(string id) {
    
    // todo : iterator kullan�m� // neden ?? // 
     for (int i = 0; i < merchants.size(); i++) {
        if (merchants.at(i).getID() == id) {
            merchants.erase(merchants.begin()+i);
            break;
        }
    }

}

int Merchants::size() {
    return merchants.size();
}

Merchant Merchants::get(string id) {
   for (int i = 0; i < merchants.size(); i++) {
        if (merchants.at(i).getID() == id) {
            return merchants.at(i);
        }
    } 
}

Merchant Merchants::at(int index) {
    return merchants.at(index);
}

void Merchants::print() {
    for (int i = 0; i < merchants.size(); i++) {
        cout << (merchants.at(i).getname());
    }
    cout << " " << endl;
}