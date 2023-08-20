//#pragma once
// define class Neuron
#include <stdlib.h>
#include <vector>

class Neuron
{
public:
	Neuron() {}
	~Neuron() {}
	double initNeuron()
	{
		return ((double)rand()) / RAND_MAX; // initial
	}

	vector<double> listOfInputWeight; // if the last layer has x neurons, it contains x weights(fully connected)
	vector<double> listOfOutputWeight; // if the next layer has y neurons, it contains y weights(fully connected)
	double outputValue;
	double error;
	double sensibility;
};