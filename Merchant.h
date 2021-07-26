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
        void bankaEkle(Banka banka);
        void bankaCikar(string id);
        void bankaMod(string id);
        void print();
        string to_string();
};