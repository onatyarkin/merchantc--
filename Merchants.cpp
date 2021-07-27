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
    vector<Merchant> Merchants; 
    for (vector<Merchant>::iterator it = merchants.begin(); it != merchants.end(); ++it) {
        if (it ->getID() == id) {
            merchants.erase(it);
            break;
        }
    }

}


Merchant Merchants::at(int index) {
    return merchants.at(index);
}

void Merchants::print() {
    for (int i = 0; i < merchants.size(); i++) {
        cout << (merchants.at(i).to_string());
    }
    cout << " " << endl;
}