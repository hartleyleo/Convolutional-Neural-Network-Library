template<typename T>

#import <vector>

struct result {
    const T& actual_output;
    const T& expected_output;
}

class Network {

    private:

        // Variables
        int input_layer_size;
        int hidden_layer_amount;
        int output_layer_size;

        Node* input_layer[input_layer_size];
        Node* hidden_layers[hidden_layer_amount]; // Arr of std::vec of size input_layer_size * 2/3
        Node* output_layer[output_layer_total];

        // Generate Network functions
        Node*[] generate_hidden_layers(int hidden_layer_amount);
        // Convolutional layers, pooling layers, etc

        // Training functions
        // Propogation functions
        result forwardPropogate(); // needs training data, and actual correct params
        void backwardPropogate(); // needs training data, and actual correct params

        // double loss_value(); // Unsure param

        // XXX gradient_descent(); // Unsure if needed but most likely, unsure param and return

        void deleteNetwork ();

    public:

        // Constructors
        Network();
        ~Network();

        // This constructor will generate the network with specifics
        Network(int input_layer_size, int output_node_total, int complexity);

        // Prediction functions
        const T& predict(double* training_data[], const T&* training_labels[]);
        void prediction_analysis(result* results[]); // Will just print out data
        
        // Train with base activation function
        void train(double* training_data[], const T&* training_labels[]);

        // Functions
        void deleteNetwork();
};