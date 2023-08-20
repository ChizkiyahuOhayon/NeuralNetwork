#pragma once
#include <iostream>
using namespace std;

#include "layer.h"
class OutputLayer : public Layer // public inheritance
{
public:
	OutputLayer& initLayer(OutputLayer& outputlayer)
	{
		vector<double> listOfWeightOutTemp; // all the weights
		//std::vector<Neuron> listOfNeurons; // all the neurons

		for (size_t i = 0; i < outputlayer.numberOfNeuron; i++)
		{
			Neuron neuron; // a new neuron
			listOfWeightOutTemp.push_back(neuron.initNeuron()); // store the initial value
			// neurons in the input layer don't need weight_in, so just store the initial state of each neuron
			neuron.listOfOutputWeight = listOfWeightOutTemp; // each vector contains only one number

			listOfNeurons.push_back(neuron); // add this neuron
			listOfWeightOutTemp.clear(); // in each loop(each neuron), it stores the weight_in vector 
		}
		outputlayer.listOfNeurons = listOfNeurons;
		return outputlayer;
	}
	void printLayer(OutputLayer& outputlayer)
	{
		cout << "##Input Layer##" << endl;
		int n = 1;
		for (Neuron& neuron : outputlayer.listOfNeurons) // for(int a: array1) for each a in array1
		{
			cout << "neuron" << n << ":" << endl;
			cout << "list of weight_out:" << endl;
			for (double weight_out : neuron.listOfOutputWeight)
			{
				cout << weight_out << endl;
			}
			n++; // next neuron
			cout << endl;
		}
	}
};