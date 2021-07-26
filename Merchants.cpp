using namespace std;

Merchants::Merchants() {
    this->merchants = vector<Merchant>();
}

void Merchants::addMerchant(Merchant merchant) {
    this->merchants.push_back(merchant);
}

void Merchants::removeMerchant(string id) {
    for (int i = 0; i < merchants.size(); i++) {
        Merchant merchant = merchants.at(i);
        if (merchant.getID() == id) {
            merchants.erase(i);
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
    cout << " " endl;
}