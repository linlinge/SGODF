#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

#include<limits.h>
using namespace std;
class Statistics
{
	public:
		vector<float> dat_;
		float min_,max_;
		float sum_;
		float mean_;
		float stdev_;
		float stdevp_;
		
		Statistics(vector<float> dat);
};

double GaussErrorFunction(double x);
double LossFunc(double x);
double GaussianKernel(double x);
double Erf(double x);
double Quantile(vector<int>& dat,double ratio);