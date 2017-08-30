/*
 * minE.h
 *
 *  Created on: Nov 29, 2012
 *      Author: agpetit
 */

#ifndef MINE_H_
#define MINE_H_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cv.h>
#include <visp/vpConfig.h>
#include <visp/vpMath.h>
#include <visp/vpImage.h>
#include <visp/vpRGBa.h>
#include <visp/vpImagePoint.h>
#include <visp/vpScale.h>
#include <visp/vpMatrix.h>
#include <visp/vpDisplay.h>
#include "energy.h"
#include "graph.h"
#include "visp/vpConfig.h"

class VISP_EXPORT minE
{
public:
//int *mask;
int resolution;

minE();
virtual ~minE();
void init(int res);
void setResolution(int res){resolution = res;}
void minEnergy(MRF::CostVal *DeF, MRF::CostVal *DeB, unsigned char *R, unsigned char *G, unsigned char *B, unsigned char *_mask, int n, int m, vpImage<unsigned char> &I);


};
#endif /* MINE_H_ */
