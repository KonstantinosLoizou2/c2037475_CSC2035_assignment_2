cmake_minimum_required(VERSION 3.27)
project(c2037475_CSC2035_assignment_2_part1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(test)
include_directories(test/munit)

add_executable(c2037475_CSC2035_assignment_2_part1
        test/munit/munit.c
        test/munit/munit.h
        test/munit.c
        test/munit.h
        test/procs4tests.c
        test/procs4tests.h
        test/test_ipc.c
        test/test_ipc.h
        test/test_ipc_jobqueue.c
        test/test_ipc_jobqueue.h
        test/test_job.c
        test/test_job.h
        test/test_joblog.c
        test/test_joblog.h
        test/test_jobqueue_common.c
        test/test_jobqueue_common.h
        test/test_pri_jobqueue.c
        test/test_pri_jobqueue.h
        test/test_proc.c
        test/test_proc.h
        test/test_sem_jobqueue.c
        test/test_sem_jobqueue.h
        test/test_shobject_name.c
        test/test_shobject_name.h
        ipc.c
        ipc.h
        ipc_jobqueue.c
        ipc_jobqueue.h
        job.c
        job.h
        joblog.c
        joblog.h
        pri_jobqueue.c
        pri_jobqueue.h
        proc.c
        proc.h
        rmsho.c
        sem_jobqueue.c
        sem_jobqueue.h
        shobject_name.c
        shobject_name.h
        sim_config.h)
