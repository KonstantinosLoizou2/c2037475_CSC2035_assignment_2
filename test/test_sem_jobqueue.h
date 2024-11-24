/******** DO NOT EDIT THIS FILE ********/
/* 
 * test_sem_jobqueue.h - structures and function declarations for unit tests
 * of sem_jobqueue functions.
 * 
 */  
#ifndef _TEST_SEM_JOBQUEUE_H
#define _TEST_SEM_JOBQUEUE_H
#define MUNIT_ENABLE_ASSERT_ALIASES
#include "munit/munit.h"


MunitResult test_sem_jobqueue_dummy(const MunitParameter params[],
    void* fixture);

static MunitTest tests[] = {
    { "/test_sem_jobqueue_dummy", test_sem_jobqueue_dummy, NULL, NULL,
        MUNIT_TEST_OPTION_NONE, NULL },
    { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
};

static const MunitSuite suite = {
    "/test_sem_jobqueue", tests, NULL, 1, MUNIT_SUITE_OPTION_NONE 
};    




#endif