#include<iostream>
#include<ctime>         // For time()
#include<cstdlib>      // For rand() and srand()

int main(){
    // seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int daysUntilExpiration = std::rand() % 12;

    if (daysUntilExpiration <= 10){
        std::cout<< "Your subscription will expire soon.Renew now!" << std::endl;
    } else if (daysUntilExpiration <= 5){
         std::cout<<"Your subscription expires in"<< daysUntilExpiration << "days.Renew now and save 10%!" <<std::endl;
    } else if (daysUntilExpiration == 1){
        std::cout <<"Your subscription expires within a day! Renew now and save 20%!" <<std::endl;
    } else{
        std::cout <<"You have an active subscription"<< std::endl;
        if (daysUntilExpiration < 0){
            std::cout <<"Your subscription has expired"<< std::endl;
        }
    }
        return 0;          

    

}