#include "../Header/netcore.h"

namespace Netcore{
    void Sequential::train(){
        assert(built);
        std::cout << "TRAINING SEQUENTIAL MODEL" << std::endl;
        ForwardPropagate();
    }

    void Sequential::predict(){
        assert(built);
        std::cout << "PREDICTING WITH SEQUENTIAL MODEL" << std::endl;
    }

    void Sequential::build(){
        assert(num_layers != 0);
        std::cout << "BUILDING SEQUENTIAL MODEL" << std::endl;
        built = true;
    }

    void Sequential::add(std::vector<Netcore::Layers::LayerConstructor*> layerVector){
        assert(!built);
        for(int i = 0; i < layerVector.size(); ++i){
            layers.push_back(layerVector[i]);
        }
        num_layers = layers.size();
    }

    void Sequential::show(){
        assert(built);
        std::cout << std::endl << "Model: SEQUENTIAL" << std::endl;
        std::cout << "====================" << std::endl;
        for(int i = 0; i < layers.size(); ++i){
            layers[i]->toString();
            if(i != layers.size() - 1){
                std::cout << "––––––––––––––––––––" << std::endl;
            }
        }
        std::cout << "====================" << std::endl << std::endl;
    }
}