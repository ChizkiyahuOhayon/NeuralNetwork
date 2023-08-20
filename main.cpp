#include "InputLayer.h"
#include "Ouptputlayer.h"

int main()
{
	InputLayer inputL;
	inputL.numberOfNeuron = 5;
	inputL = inputL.initLayer(inputL);
	inputL.printLayer(inputL);

	OutputLayer OutputL;
	OutputL.numberOfNeuron = 5;
	OutputL = OutputL.initLayer(OutputL);
	OutputL.printLayer(OutputL);

	return 0;
}