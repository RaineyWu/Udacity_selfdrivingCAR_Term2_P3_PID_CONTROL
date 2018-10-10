#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;
	p_error = 0.0;
	i_error = 0.0;
	d_error = 0.0;

}

void PID::UpdateError(double cte) {
	if(!is_initialized){
		cte_prev = cte;
		is_initialized = true;
	}
	p_error = cte;
	i_error += cte;
	d_error = cte - cte_prev;
	cte_prev = cte;
	alpha = - Kp * p_error - Ki * i_error - Kd * d_error;
}
 
double PID::TotalError() {
	totalError += pow(p_error, 2);
}

