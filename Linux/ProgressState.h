#pragma once

/** comments on bla bla
 ....
 ....
*/

class ProgressState {
public:
  ProgressState(unsigned int target);
  virtual ~ProgressState();
 /**
   bla bla
   bla bla ....
  */

  unsigned int getPercentage();
  

  void setValue(int value);
private:
  unsigned int m_value;
  unsigned int m_target;
};
