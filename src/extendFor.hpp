#ifndef _EXTENDFOR_HPP_
#define _EXTENDFOR_HPP_

#include <Arduino.h>

class extendFor {
  public:
    //============================================
    // Constructor
    //============================================
    extendFor(void) {
    }

    //============================================
    // begin
    //============================================
    void begin(void) {
      _first = true;
    }

    //============================================
    // end
    //============================================
    void end(void) {
      _first = true;
    }

    //============================================
    // set
    //============================================
    void set(int start, int end, int step) {
      _start = start;
      _end = end;
      _step = step;
      _iadd = _step;
      _i = (_start - _iadd);
    }
    
    //============================================
    // update
    //============================================
    int update(void) {
      _i += _iadd;
      if (((_i + _iadd) < _start) || (_i > (_end - _iadd))) {
        _iadd = -_iadd;
      }
      return _i;
    }

    //============================================
    // exf
    //============================================
    int exf(int start, int end, int step) {
      if (_first) {
        set(start, end, step);
        _first = false;
      }
      return update();
    }
    
  private:

    int _start = 0;
    int _end = 0;
    int _step = 0;
    int _i = 0;
    int _iadd = 0;
    bool _first = true;

};

#endif
