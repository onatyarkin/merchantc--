#include <iostream>
#include <vector>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Merchant.h"
#include "Banka.h"
#include "Merchants.h"
#include <cstdlib>
using namespace std;




int main() {
	int userMode, choice, choice2;
    string id, name, registrationtime, terminalId, cihaz, password, tcKimlikNo, bankId, ad;
    vector<Banka> anlasmalilar;
	bool bankMode;
	Merchants* merchants = new Merchants();
	std::cout << "==Hoşgeldiniz=="<< std::endl;
	std::cout << "\nUser Mode Seçin" << std::endl;
	std::cout << "1. Admin" << std::endl;
	std::cout << "2. User" << std::endl;
	std::cout << "Seçiminiz: ";
	std::cin >> userMode;
	//Admin
	if (userMode == 1) {
		int cikis = 1;
		do {
			std::cout << "\nMENU" << std::endl;
			std::cout << "1. Merchant Kaydı" << std::endl;
			std::cout << "2. Sisteme eklenmiş bütün merchantlara ait bilgileri görüntüleme" << std::endl;
			std::cout << "3. Merchant Silme" << std::endl;
			std::cout << "4. Merchanta banka ekleme" << std::endl;
    		std::cout << "5. Merchanttan banka çıkarma" << std::endl;
			std::cout << "6. Merchant Banka modu set etme" << std::endl;
			std::cout << "Seçiminiz: ";
			std::cin >> choice;
			switch(choice) {
		  		case 1:
					srand(time(NULL));
            		id = to_string((rand() % 100) + 1);
					std::cout << "id : " << id <<std::endl;
					std::cout << "Merchant Name: ";
					std::cin >> name;
					time_t now;
    				struct tm nowLocal;
    				now=time(NULL); 
    				nowLocal=*localtime(&now);
					registrationtime =to_string(nowLocal.tm_hour) + ":" + to_string(nowLocal.tm_min) + " " + to_string(nowLocal.tm_mday) + "/" + to_string(nowLocal.tm_mon+1) + "/" + to_string(nowLocal.tm_year+1900);
					std::cout << "Registration Time: " + registrationtime << std::endl;
					std::cout << "Terminal ID: ";
					std::cin >> terminalId;
					if(terminalId.substr(0,2) == "AS")
					{
						std::cout << "Cihaz: 220TR ";
					}					
					else if (terminalId.substr(0,2) == "AT")
					{
						std::cout << "Cihaz: 300TR ";
					}
					else if(terminalId.substr(0,2) == "AX")
					{
						std::cout << "Cihaz: 400TR ";
					}
					else if(terminalId.substr(0,2) == "AU")
					{
						std::cout << "Cihaz: 1000TR ";
					}
					std::cout << "Merchant Password: ";
					std::cin >> password;
					std::cout << "Merchant TC: ";
					std::cin >> tcKimlikNo;
					merchants->addMerchant(Merchant(id,name,registrationtime,terminalId,cihaz,tcKimlikNo,anlasmalilar,password));
		    		break;
		  		case 2:
		    		//Merchtantsları tek tek gez ve printle
					for (int i = 0; i < merchants->size(); i++) {
						merchants->at(i).print();
					}
		    		break;
  		  		case 3:
					std::cout << "Merchant ID: ";
					std::cin >> id;
					merchants->removeMerchant(id);
					//Merchants idye göre sil
  		    		break;
  		  		case 4:
            		std::cout << "Merchant ID: ";
					std::cin >> id;
					std::cout << "Banka ekleyiniz: ";
					std::cout << "Banka Id : ";
					std::cin >> bankId;
					std::cout << "Banka adı : ";
					std::cin >> ad;
					std::cout << "Banka modu : ";
					std::cin >> bankMode;
					merchants->get(id).bankaEkle(Banka(bankId, ad, bankMode));
					
  		    		// Merchanttaki idye göre banka ekle
  		    		break;
  		  		case 5:
					std::cout << "Merchant ID: ";
					std::cin >> id;
					std::cout << "Banka ID: ";
					std::cin >> bankId;
					merchants->get(id).bankaCikar(bankId);
					// merchant idye göre banka cıkar
  		    		break;
  		  		case 6:
					std::cout << "Merchant ID: ";
					std::cin >> id;
					std::cout << "Banka ID: ";
					std::cin >> bankId;
					merchants->get(id).bankaMod(bankId);
					
  		    		// Merchanttaki bankayı bul, modeunu bankMode a eşitle
  		    		break;
            	default:
		    		std::cout << "Hatalı Seçim"<< std::endl;
					break;
			}
	    	std::cout << "Cıkmak istiyorsaniz 1'e, istemiyorsaniz 0'a basınız.";
			std::cin >> cikis;
			if (cikis == 1) {
				break;
			}
		} while (true);
	} else if (userMode == 2) {
		std::cout << "\nMENU" << std::endl;
		std::cout << "1. Merchant Bilgisini Alma" << std::endl;
		std::cout << "Seçiminiz: ";
		std::cin >> choice2;
		if (choice2 == 1) {
			std::cout << " id: ";
			std::cin >> id;
			std::cout << "Password: ";
			std::cin >> password;
			//Eger password dogruysa merchantın butun bilgilerini printle
		} else {
			std::cout << "Hatalı Seçim"<< std::endl;
		}
	}
	return 0;
}
