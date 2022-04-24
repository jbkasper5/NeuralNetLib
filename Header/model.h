namespace Netcore{
    class Models{
    public:
        virtual void train() = 0;
        virtual void predict() = 0;
        virtual void build() = 0;
        virtual void add(std::vector<Netcore::Layers::LayerConstructor*> layerVector) = 0;
        virtual void show() = 0;

        void ForwardPropagate();
    protected:
        bool built;
        std::vector<Netcore::Layers::LayerConstructor*> layers;
        int num_layers = 0;
    private:
    };
}