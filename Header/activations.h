namespace Netcore{
    class Activations{
    public:
        class ActivationConstructor{
        public:
            virtual void ApplyNonlinearity() = 0;
            // virtual void toString() = 0;
        protected:
        private:
        };

        class ReLu: public ActivationConstructor{
        public:
            ReLu();
            void ApplyNonlinearity();
        protected:
        private:
        };

        class Sigmoid: public ActivationConstructor{
        public:
            Sigmoid();
            void ApplyNonlinearity();
        protected:
        private:
        };

        class Tanh: public ActivationConstructor{
        public:
            Tanh();
            void ApplyNonlinearity();
        protected:
        private:
        };

        class Softmax: public ActivationConstructor{
        public:
            Softmax();
            void ApplyNonlinearity();
        protected:
        private:
        };

        static const char* RELU;
        static const char* SIGMOID;
        static const char* TANH;
        static const char* SOFTMAX;

    protected:
    private:
    };
}
