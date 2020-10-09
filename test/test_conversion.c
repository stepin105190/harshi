#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <number_conversion.h>
#define PROJECT_NAME    "number_conversion"

/* Prototypes for all the test functions */
long int Bin_to_Dec(long int);
long int Bin_to_Oct(long int);
long int Bin_to_Hex(long int);
long int Dec_to_Bin(long int);
long int Dec_to_Oct(long int);
long int Dec_to_Hex(long int);      
long int Oct_to_Bin(long int);
long int Oct_to_Dec(long int);
long int Oct_to_Hex(long int);
void Hex_to_Bin(char []);
void Hex_to_Dec(char []);
void Hex_to_Oct(char []);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  CU_add_test(suite, "Bin_to_Dec", test_Bin_to_Dec);
  CU_add_test(suite, "Bin_to_Oct", test_Bin_to_Oct);
  CU_add_test(suite, "Bin_to_Hex", test_Bin_to_Hex);
  CU_add_test(suite, "Dec_to_Bin", test_Dec_to_Bin);
  CU_add_test(suite, "Dec_to_Hex", test_Dec_to_Hex);
  CU_add_test(suite, "Oct_to_Bin", test_Oct_to_Bin);
  CU_add_test(suite, "Oct_to_Hex", test_Oct_to_Hex);
  
/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */ 
void test_Bin_to_Dec(void) {
  CU_ASSERT(10==Bin_to_Dec(1010));
}
  
 void test_Bin_to_Oct(void) {
  CU_ASSERT(1==Bin_to_Oct(0001));
 }
  
void test_Bin_to_Hex(void){
  CU_ASSERT('A'==Bin_to_Hex(1010));
    }
 void test_Dec_to_Bin(void) {
  CU_ASSERT(0001==Dec_to_Bin(1));
    }
 void test_Dec_to_Hex(void){
  CU_ASSERT('A'==Dec_to_Hex(10));
    }
     void test_Oct_to_Bin(void){
  CU_ASSERT(1==Oct_to_Bin(1));
    }
     void test_Oct_to_Hex(void){
  CU_ASSERT('A'==Oct_to_Hex(12));
    }
