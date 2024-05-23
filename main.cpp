//
//  main.cpp
//  c++loginformu
//
//  Created by Funda Serenlim on 23.08.2023.
//

#include <iostream>
//using namespace std;
const std::string kullaniciadi="funda";
std::string girilenkullaniciadi;
const std::string sifre="35bizimsifre";
std::string girilensifre;
int bloke=0;

int main() {
    
    while(1){
        x:
        std::cout<<"Kullanıcı adını giriniz: ";
        std::cin>>girilenkullaniciadi;
        
        if(kullaniciadi!=girilenkullaniciadi) {
            std::cout<<"Sistemde böyle bir kullanıcı adı bulunamadı..."<<std::endl;
            goto x;
        }
        std::cout<<"Şifre giriniz： ";
        std:: cin>>girilensifre;
        
        if (sifre==girilensifre && kullaniciadi==girilenkullaniciadi && bloke<3){
            std::cout<<"girdiginiz sifre dogru!"<<std::endl;break;
        }
        else{
            std::cout<<"Girdiginiz şifre yanlış! TEKRAR DENEYİNİZ!"<<std::endl;
            bloke++;
            if(bloke==3){
                std::cout<<"Hesabınız bloke oldu..."<<std::endl;
                break;
            }
            
        }
    }
    return 0;
}
