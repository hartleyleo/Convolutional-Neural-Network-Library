#include "Network.h"

#include <iostream>

// Default constructor
Network::Network() {

    this->input_layer_size = 0;
    this->hidden_layer_amount = 0;
    this->output_layer_size = 0;

}

// Deconstructor
Network::~Network() {

    deleteNetwork ();

}

// Custom constructor
Network::Network(int input_layer_size, int output_node_total, int complexity) {

    if (complexity == 0) {
        this->hidden_layer_amount = 2;
    } else if (complexity == 1) {
        this->hidden_layer_amount = 4;
    } else if (complexity == 2) {
        this->hidden_layer_amount = 8;
    } else {
        throw std::invalid_argument("Complexity must be 0, 1, or 2");
    }

    this->input_layer_size = input_layer_size;
    this->output_layer_size = output_node_total;

}

// Public

const T& Network::predict(double* training_data[], const T&* training_labels[]) {
    // This will just run forward propogation and return the results
}

void Network::prediction_analysis(result* results[]) {

    // Checks if the result array is empty
    if (results == []) {
        std::cout << "Accuracy is calculated using the output of the previous predict call. Seeing as the previous predict either hasn't been called or yieled an empty set, please train the model." <<std::endl;
    } else {

        int arr_length = sizeof(results) / sizeof(results[0]);
        int total_correct = 0;

        for (int i = 0; i < arr_length; i++) {
            if (results[i].actual_output == results[i].expected_output) {
                total_correct += 1;
            }
        }

        std::cout << "Current Model Accuracy: " << ( total_correct / arr_length ) * 100 << "%" << std::endl;

    }

}

void Network::train(double* training_data[], const T&* training_labels[]) {}

// Private

void Network::deleteNetwork() {
    // Go through each layer and free each node
    // Free the network
}

