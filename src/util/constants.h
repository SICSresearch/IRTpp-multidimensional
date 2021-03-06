/*
 * constants.h
 *
 *  Created on: Jul 22, 2016
 *      Author: Milder
 */

#ifndef UTIL_CONSTANTS_H_
#define UTIL_CONSTANTS_H_

#include <string>

//including optimization files from dlib library
#include <dlib/optimization.h>

namespace irtpp {

	typedef dlib::matrix<double,0,1> optimizer_vector; /**< data type from dlib library*/

	const int MAX_ITERATIONS = 500; /**< Max number of iterations of EMAlgorithm*/
	const int MAX_NUMBER_OF_GAUSSIAN_POINTS = 40; /**< Max number of quadrature points*/

	const std::string GAUSSIAN = "GAUSSIAN";
	const std::string QMCEM = "QMCEM";
	const int DEFAULT_QMCEM_POINTS = 2000;

	const std::string NONE = "NONE";
	const std::string BUILD = "BUILD";

	//Models
	const int ONEPL = 1;
	const int TWOPL = 2;
	const int THREEPL = 3;

	const std::vector<int> EMPTY_INTEGER_VECTOR = std::vector<int>();

	const double LOWER_BOUND_ = 1e-10;
	const double UPPER_BOUND_ = 1.0 - LOWER_BOUND_;

	const int ACCELERATION_PERIOD = 3;
	const double MINIMUM_ACCEL = -5.0;

	const double PI_ = std::acos(-1);

	const double NOT_COMPUTED = -INT_MAX;

	const double DEFAULT_INITIAL_VALUE = 1.0;
	const double DEFAULT_C_INITIAL_VALUE = -1.1;

	const double DEFAULT_EM_DELTA_STOP = 1e-4;
	const double OPTIMIZER_DELTA_STOP = 1e-6;
}


#endif /* UTIL_CONSTANTS_H_ */
