#include "../Header/netcore.h"

Netcore::Activations::ActivationConstructor* getActivation(const char* activation){
    if(activation == Netcore::Activations::RELU){
        return new Netcore::Activations::ReLu();
    }else if(activation == Netcore::Activations::SIGMOID){
        return new Netcore::Activations::Sigmoid();
    }else if(activation == Netcore::Activations::TANH){
        return new Netcore::Activations::Tanh();
    }else if(activation == Netcore::Activations::SOFTMAX){
        return new Netcore::Activations::Softmax();
    }else{
        return new Netcore::Activations::ReLu();
    }
}

namespace Netcore{
    Layers::Layer1::Layer1(int num_nodes){
        nodes = num_nodes;
        activation = new Netcore::Activations::ReLu();
    }

    Layers::Layer1::Layer1(int num_nodes, const char* activationFunction){
        nodes = num_nodes;
        activation = getActivation(activationFunction);
    }

    void Layers::Layer1::toString(){
        std::cout << "LAYER 1: " << nodes << " node(s)" << std::endl;
    }

    Layers::Layer2::Layer2(int num_nodes){
        nodes = num_nodes;
        activation = new Netcore::Activations::Sigmoid();
    }

    Layers::Layer2::Layer2(int num_nodes, const char* activationFunction){
        nodes = num_nodes;
        activation = getActivation(activationFunction);
    }

    void Layers::Layer2::toString(){
        std::cout << "LAYER 2: " << nodes << " node(s)" << std::endl;
    }

    Layers::SpecialLayer::SpecialLayer(int num_nodes){
        nodes = num_nodes;
        activation = new Netcore::Activations::Tanh();
    }

    Layers::SpecialLayer::SpecialLayer(int num_nodes, const char* activationFunction){
        nodes = num_nodes;
        activation = getActivation(activationFunction);
    }

    void Layers::SpecialLayer::toString(){
        std::cout << "SPECIAL: " << nodes << " node(s)" << std::endl;
    }
}