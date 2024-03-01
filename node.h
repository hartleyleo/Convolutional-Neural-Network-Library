#ifndef NODE_H
#define NODE_H

#include <vector>

class Node {
public:
    // Constructor
    Node();

    // Destructor
    ~Node();

    // Setters and getters for node attributes (e.g., weights, bias)

    // Function to compute the weighted sum of inputs
    double computeWeightedSum(const std::vector<double>& inputs);

    // Function to apply the activation function to the weighted sum
    double applyActivationFunction(double weighted_sum);

    // Function to compute the output of the node
    double computeOutput(const std::vector<double>& inputs);
};

#endif // NODE_H