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


  void test_lower(){ 
    CPPUNIT_ASSERT(a->sum(0,0)==0);
    }
  
  void test_middle(){
    CPPUNIT_ASSERT(a->sum(10,100)==110);
  }
   
  void test_upper(){
    CPPUNIT_ASSERT(a->sum(11111,22222)==33333);
  }

  CPPUNIT_TEST_SUITE(test_add);
   CPPUNIT_TEST(test_lower);
   CPPUNIT_TEST(test_middle);
   CPPUNIT_TEST(test_upper);
  CPPUNIT_TEST_SUITE_END();
 
};

#endif

