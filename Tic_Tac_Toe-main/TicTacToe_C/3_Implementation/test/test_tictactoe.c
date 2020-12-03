#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <tic_tac_toe.h>
#define PROJECT_NAME    "TicTacToe"

/* Prototypes for all the test functions */
void test_board_print(void);
void test_if_rules_are_printed(void);
void test_marked_correct(void);
void test_invalid_move_for_numbers_out_of_range(void);
void test_invalid_move_for_positions_already_occupied(void);
void test_check_for_a_winner(void);
void test_check_for_a_tie(void);
void test_horizontal_win(void);
void test_vertical_win(void);
void test_diagonal_win(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "board", test_board_print);
  CU_add_test(suite, "rules", test_if_rules_are_printed);
  CU_add_test(suite, "correct marking", test_marked_correct);
  CU_add_test(suite, "out of range input", test_invalid_move_for_numbers_out_of_range);
  CU_add_test(suite, "already filled position as input", test_invalid_move_for_positions_already_occupied);
  CU_add_test(suite, "winner", test_check_for_a_winner);
  CU_add_test(suite, "Game tie", test_check_for_a_tie);
  CU_add_test(suite, "Horizontal win", test_horizontal_win);
  CU_add_test(suite, "Vertical win", test_vertical_win);
  CU_add_test(suite, "Diagonal win", test_diagonal_win);


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
void test_board_print(void){
  CU_ASSERT(0 == creating_board());

  /* Dummy fail*/
  //CU_ASSERT(0 == creating_board());
}

void test_if_rules_are_printed(void) {
  CU_ASSERT(0 == rules());

  /* Dummy fail*/
  //CU_ASSERT(0 == rules());
}

void test_marked_correct(void) {
  CU_ASSERT(1 == marking_board(1,'X'));
  CU_ASSERT(1 == marking_board(4,'O'));
  CU_ASSERT(1 == marking_board(2,'X'));
  CU_ASSERT(1 == marking_board(3,'X'));
  CU_ASSERT(1 == marking_board(5,'O'));

  /* Dummy fail*/
  //CU_ASSERT(2 == multiply(2, 5));
}

void test_invalid_move_for_numbers_out_of_range(void){
  CU_ASSERT(0 == marking_board(11,'X'));
  CU_ASSERT(0 == marking_board(44,'O'));
  CU_ASSERT(0 == marking_board(66,'X'));

  /* Dummy fail*/
  //CU_ASSERT(3 == divide(2, 2));
}

void test_invalid_move_for_positions_already_occupied(void){
  CU_ASSERT(0 == marking_board(1,'O'));
  CU_ASSERT(0 == marking_board(4,'X'));
  CU_ASSERT(0 == marking_board(2,'O'));
  CU_ASSERT(0 == marking_board(3,'O'));
  CU_ASSERT(0 == marking_board(5,'X'));
}

void test_check_for_a_winner(void)
{
  CU_ASSERT(1 == check_for_win());
}

void test_check_for_a_tie(void)
{
  CU_ASSERT(1 == check_if_tie(1));
  CU_ASSERT(0 == check_if_tie(0));
}

void test_horizontal_win(void)
{
  CU_ASSERT(1 == check_horizontal(1));
}

void test_vertical_win(void)
{
  CU_ASSERT(0 == check_vertical(1));
  CU_ASSERT(1 == check_vertical(2));
}

void test_diagonal_win(void)
{
  CU_ASSERT(0 == check_diagonal(1));
  CU_ASSERT(1 == check_diagonal(3));
}
