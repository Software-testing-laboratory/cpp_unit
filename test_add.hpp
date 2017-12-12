/***************************************************************
 * @File test_add.hpp
 * 
 *
 */

#ifndef INCLUDED_TEST_ADD_HPP
#define INCLUDED_TEST_ADD_HPP

#include "Calculator.hpp"
#include <TestFixture.h>
#include <TestSuite.h>
#include <TestCaller.h>
#include <extensions/HelperMacros.h>

class test_add : public CppUnit::TestFixture {
  private:
  Calculator * a;

public:
  void setUp()
  {
    a=new Calculator; 
  }

  void tearDown()
  {
    delete a; 

  }


  void test_sum(){ 
    CPPUNIT_ASSERT(a->sum(10,20)==30);
    }

  CPPUNIT_TEST_SUITE(test_add);
  CPPUNIT_TEST(test_sum);
  CPPUNIT_TEST_SUITE_END();
 
};

#endif

