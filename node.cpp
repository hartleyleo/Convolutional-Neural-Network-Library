#include "node.h"

// Constructor
Node::Node() {
    // Initialize node attributes (weights, biases)
}

// Destructor
Node::~Node() {

}

// Calculates the weighted sum of all input nodes
double Node::computeWeightedSum(const std::vector<double>& inputs) {
    double weighted_sum = 0.0;

    // Compute the weighted sum by multiplying inputs with corresponding weights and summing them

    return weighted_sum;
}

// Compute the activation amount from the weighted sum (using sigmoid i think)
double Node::applyActivationFunction(double weighted_sum) {
    double activation_function_result = 0.0;

    return activation_function_result;
}

// Function to compute the output of the node
double Node::computeOutput(const std::vector<double>& inputs) {
    double weighted_sum = computeWeightedSum(inputs);

    double output = applyActivationFunction(weighted_sum);

    return output;
    // This output then can be sent to all nodes in the next layer
    // I think this should be done in the neural net class
}