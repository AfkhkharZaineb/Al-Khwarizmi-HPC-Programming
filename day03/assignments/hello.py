# write your program here
from pyccel.stdlib.internal.openmp import omp_get_thread_num, omp_get_num_threads
def hello():
   for i in range(omp_get_num_threads()) :
       print("hello from the rank "+str(omp_get_thread_num())+" thread")
hello()
