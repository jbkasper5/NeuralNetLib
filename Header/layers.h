namespace Netcore{
    class Layers{
    public:
        class LayerConstructor{
        public:
            virtual void toString() = 0;
            Netcore::Activations::ActivationConstructor* activation;
        protected:
            int nodes;
        private:
        };

        class Layer1: public LayerConstructor{
        public:
            Layer1(int num_nodes);
            Layer1(int num_layers, const char* activationFunction);
            void toString();
        protected:
        private:
        };

        class Layer2: public LayerConstructor{
        public:
            Layer2(int num_nodes);
            Layer2(int num_layers, const char* activationFunction);
            void toString();
        protected:
        private:
        };

        class SpecialLayer: public LayerConstructor{
        public:
            SpecialLayer(int num_nodes);
            SpecialLayer(int num_layers, const char* activationFunction);
            void toString();
        protected:
        private:
        };

    protected:
    private:
    };
}