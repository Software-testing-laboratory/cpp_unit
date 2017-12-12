/***************************************************************
 * @File bigint_test_.hpp
 * Submitted By : Shiva Bhusal
 *
 */

#ifndef INCLUDED_BIGINT_DEAFULT_TEST_HPP
#define INCLUDED_BIGINT_DEFAULT_TEST_HPP

#include "bigint.hpp"
#include <TestFixture.h>
#include <TestSuite.h>
#include <TestCaller.h>
#include <extensions/HelperMacros.h>

class bigint_default_test : public CppUnit::TestFixture {
private:
  bigint * a;
  bigint * b; 

public:
  void setUp()
  {
    a=new bigint; 
    b=new bigint;

  }

  void tearDown()
  {
    delete a; 
    delete b;

  }

  void test_default(){
      CPPUNIT_ASSERT(*a==0);
      CPPUNIT_ASSERT(*b==0);
    }

  CPPUNIT_TEST_SUITE(bigint_default_test);
  CPPUNIT_TEST(test_default);
  CPPUNIT_TEST_SUITE_END();
 
};

#endif

