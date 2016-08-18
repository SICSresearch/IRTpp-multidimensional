/**
 * estep.h
 *
 *  Created on: 13/04/2016
 *      Author: Milder
 */

#ifndef DICHOMULTI_ESTIMATION_ESTEP_H_
#define DICHOMULTI_ESTIMATION_ESTEP_H_

#include "../../util/matrix.h"
#include "../../test/test.h"
#include <ctime>

#include <iostream>

#include <omp.h>

#include "../../dicho-multi/model/model.h"
#include "../../dicho-multi/type/estimationdata.h"

namespace irtpp {

namespace dichomulti {

/**
 * Estep of the EMAlgorithm.
 *
 * Receives an estimation_data reference that MUST bring all the
 * data needed to run the Estep
 * @param data a instance of estimation_data with all necessary data to do EMAlgorithm.
 * @param current the current zeta estimation (Ramsay and Squarem accelerate)
 */
void Estep(estimation_data&, int current);

} /* namespace irtpp */

}

#endif /* ESTIMATION_ESTEP_H_ */
