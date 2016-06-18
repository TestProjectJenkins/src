#pragma once

/*!
 * \test

*/
class ProgressState {
public:
  ProgressState(unsigned int target);
  virtual ~ProgressState();
 
 /** Comments on C++ function
 ...
 ...
 */

  unsigned int getPercentage();
  
  /** Comments on C++ function
 ...
 ...
 */

  void setValue(int value);
private:
  unsigned int m_value;
  unsigned int m_target;
};
