#pragma once
#include <iostream>
using namespace std;

#include "layer.h"

class InputLayer : public Layer // public inheritance
{
public:
	InputLayer& initLayer(InputLayer& inputlayer)
	{
		std::vector<double> listOfWeightInTemp; // all the weights
		//std::vector<Neuron> listOfNeurons; // all the neurons

		for (size_t i = 0; i < inputlayer.numberOfNeuron; i++)
		{
			Neuron neuron; // a new neuron
			listOfWeightInTemp.push_back(neuron.initNeuron()); // store the initial value
			// neurons in the input layer don't need weight_in, so just store the initial state of each neuron
			neuron.listOfInputWeight = listOfWeightInTemp; // each vector contains only one number

			listOfNeurons.push_back(neuron); // add this neuron
			listOfWeightInTemp.clear(); // in each loop(each neuron), it stores the weight_in vector 
		}
		inputlayer.listOfNeurons = listOfNeurons;
		return inputlayer;
	}
	void printLayer(InputLayer& inputlayer)
	{
		cout << "##Input Layer##" << endl;
		int n = 1;
		for (Neuron& neuron : inputlayer.listOfNeurons) // for(int a: array1) for each a in array1
		{
			cout << "neuron" << n << ":" << endl;
			cout << "list of weight_in:" << endl;
			for (double weight_in : neuron.listOfInputWeight)
			{
				cout << weight_in << endl;
			}
			n++; // next neuron
			cout << endl;
		}
	}
};
