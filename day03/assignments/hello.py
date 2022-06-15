import pyccel
if __name__ == "__main__" :
    from pyccel.stdlib.internal.openmp import omp_in_parallel,omp_get_thread_num, omp_get_num_threads
    #$omp parallel
    n = omp_get_num_threads()
    for i in range(n) :
        p = omp_get_thread_num()
        print("hello from the rank ",p," thread")
    #$omp end parallel
