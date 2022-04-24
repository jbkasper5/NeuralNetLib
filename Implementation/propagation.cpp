#include "../Header/netcore.h"

void Netcore::Models::ForwardPropagate(){
    for(int i = 0; i < num_layers; ++i){
        layers[i]->activation->ApplyNonlinearity();
    }
}

void BackPropagate(Netcore::Models* model){

}