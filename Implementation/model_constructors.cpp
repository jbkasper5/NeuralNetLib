#include "../Header/netcore.h"
namespace Netcore{
    void freeLayers(){

    }

    Sequential::Sequential(){
        std::cout << "Created Sequential Model" << std::endl;
    }

    Sequential::~Sequential(){
        std::cout << "DESTRUCTOR" << std::endl;
        if(built){
            // freeLayers(layers, num_layers);
        }
    }

    // Recurrent::Recurrent(){
    //     std::cout << "Created Recurrent Model" << std::endl;
    // }

    // Recurrent::~Recurrent(){
    //     std::cout << "DESTRUCTOR" << std::endl;
    //     if(build){
    //         freeLayers(layers, num_layers);
    //     }
    // }

    // Convolutional::Convolutional(){
    //     std::cout << "Created Recurrent Model" << std::endl;
    // }

    // Convolutional::~Convolutional(){
    //     std::cout << "DESTRUCTOR" << std::endl;
    //     if(built){
    //         free(layers, num_layers);
    //     }
    // }
}