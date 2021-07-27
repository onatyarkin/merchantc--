#include <iostream>
#include <vector>
#include "Merchant.h"
#include "Banka.h"
#include "Merchants.h"
using namespace std;




int main() 
{
	int userMode, choice, choice2;
	
    string id, name, registrationtime, terminalId, cihaz, password, tcKimlikNo, bankId;
    vector<Banka> anlasmalilar;
	bool bankMode;
	
	std::cout << "==Hoşgeldiniz=="<< std::endl;
	std::cout << "\nUser Mode Seçin" << std::endl;
	std::cout << "1. Admin" << std::endl;
	std::cout << "2. User" << std::endl;
	std::cout << "Seçiminiz: ";
	std::cin >> userMode;
	
	if (userMode == 1) //Admin
	{
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
		  case 1: {
  			std::cout << "Merchant ID: ";
  			std::cin >> id;
			std::cout << "Merchant Name: ";
			std::cin >> name;
			std::cout << "Merchant RegistrationTime: ";
			std::cin >> registrationtime;
			std::cout << "Terminal ID: ";
			std::cin >> terminalId;
			std::cout << "Cihaz: ";
			std::cin >> cihaz;
			std::cout << "Merchant Password: ";
			std::cin >> password;
			std::cout << "Merchant TC: ";
			std::cin >> tcKimlikNo;
			// todo : input ile obje ayn� isimde
			Merchant name1 = Merchant(id,name,registrationtime,terminalId,cihaz,tcKimlikNo,anlasmalilar,password);
		    break;
            }
		  case 2: {
		    //Merchtantsları tek tek gez ve printle
		    break;
            }
  		  case 3: {
			std::cout << "Merchant ID: ";
			std::cin >> id;
			
			//Merchants idye göre sil
			
  		    break;
              }
  		  case 4:{
            std::cout << "Merchant ID: ";
			std::cin >> id;
  		    // Merchanttaki idye göre banka ekle
  		    break;
              }
  		  case 5: {
			std::cout << "Merchant ID: ";
			std::cin >> id;
			std::cout << "Banka ID: ";
			std::cin >> bankId;
		
			// merchant idye göre banka cıkar
  		    break;
              }
  		  case 6: {
			std::cout << "Merchant ID: ";
			std::cin >> id;
			std::cout << "Banka ID: ";
			std::cin >> bankId;
			std::cout << "Banka Mode: ";
			std::cin >> bankMode;
			
  		    // Merchanttaki bankayı bul, modeunu bankMode a eşitle
  		    break;
            
              }
		  default: {
		    std::cout << "Hatalı Seçim"<< std::endl;
		}
	}
	if (userMode == 2) //User
	{
		std::cout << "\nMENU" << std::endl;
		std::cout << "1. Merchant Bilgisini Alma" << std::endl;
		std::cout << "Seçiminiz: ";
		std::cin >> choice2;
		
		if (choice2 == 1)
		{
			std::cout << "Merchant ID: ";
			std::cin >> id;
			std::cout << "Password: ";
			std::cin >> password;
			
			//Eger password dogruysa merchantın butun bilgilerini printle
		}
		else
		{
			std::cout << "Hatalı Seçim"<< std::endl;
		}
	}

system("pause");
return 0;
}

}
