all: matrix_op_A_O3 matrix_op_B_O3 matrix_op_A matrix_op_B matrix_op
 
EXTRA_CFLAGS = -DHAVE_LINUX_PERF_EVENT_H -g 

matrix_op: matrix_op.c 
	$(CC) -O3 -DNO $(EXTRA_CFLAGS) matrix_op.c -o matrix_op

matrix_op_A: matrix_op.c 
	$(CC) -O0 $(EXTRA_CFLAGS) -DA matrix_op.c -o matrix_op_A


matrix_op_B: matrix_op.c 
	$(CC) -O0 $(EXTRA_CFLAGS)  matrix_op.c -o matrix_op_B
	
matrix_op_A_O3: matrix_op.c 
	$(CC) $(EXTRA_CFLAGS) -O3 -DA matrix_op.c -o matrix_op_A_O3

matrix_op_B_O3: matrix_op.c 
	$(CC) $(EXTRA_CFLAGS) -O3  matrix_op.c -o matrix_op_B_O3

clean:
		rm -f matrix_op_A matrix_op_B *_O3 *~ 
		#hotspot hotspot_omp
		