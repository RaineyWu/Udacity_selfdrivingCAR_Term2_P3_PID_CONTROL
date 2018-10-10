#ifndef PID_H
#define PID_H
#include<cmath>;

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;
  double totalError;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

  bool is_initialized;
  double cte_prev;
  double alpha;

  /*
  * Constructor
  */
  PID(): is_initialized(false){};

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
