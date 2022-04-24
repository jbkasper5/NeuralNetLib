namespace Netcore{
    class Sequential: public Netcore::Models{
    public:
        Sequential();
        virtual ~Sequential();
        
        void train();
        void predict();
        void build();
        void add(std::vector<Netcore::Layers::LayerConstructor*> layerVector);
        void show();
    private:
    };
}