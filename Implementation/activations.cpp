#include <../Header/netcore.h>

namespace Netcore{
    
    const char* Activations::RELU = "relu";
    const char* Activations::SIGMOID = "sigmoid";
    const char* Activations::TANH = "tanh";
    const char* Activations::SOFTMAX = "softmax";

    Activations::ReLu::ReLu(){

    }

    void Activations::ReLu::ApplyNonlinearity(){
        std::cout << "RELU FUNCTION" << std::endl;
    }

    Activations::Sigmoid::Sigmoid(){

    }

    void Activations::Sigmoid::ApplyNonlinearity(){
        std::cout << "SIGMOID FUNCTION" << std::endl;
    }

    Activations::Tanh::Tanh(){

    }

    void Activations::Tanh::ApplyNonlinearity(){
        std::cout << "TANH FUNCTION" << std::endl;
    }

    Activations::Softmax::Softmax(){

    }

    void Activations::Softmax::ApplyNonlinearity(){
        std::cout << "SOFTMAX FUNCTION" << std::endl;
    }
}