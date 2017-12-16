/***************************************************************
 * @File test_add.hpp
 * 
 *
 */

#ifndef INCLUDED_TEST_SUBS_HPP
#define INCLUDED_TEST_SUBS_HPP

#include "Calculator.hpp"
#include <TestFixture.h>
#include <TestSuite.h>
#include <TestCaller.h>
#include <extensions/HelperMacros.h>

class test_subs : public CppUnit::TestFixture {
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


  void test_lower(){ 
    CPPUNIT_ASSERT(a->subs(0,0)==0);
  }
  
  void test_middle(){
    CPPUNIT_ASSERT(a->subs(100,10)==90);
  }
   
  void test_upper(){
    CPPUNIT_ASSERT(a->subs(33333,22222)==11111);
  }

  CPPUNIT_TEST_SUITE(test_subs);
  CPPUNIT_TEST(test_lower);
  CPPUNIT_TEST(test_middle);
  CPPUNIT_TEST(test_upper);
  CPPUNIT_TEST_SUITE_END();
 
};

#endif


