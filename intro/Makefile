all: madd arraySort bitonic quicksort


madd: madd.c
	gcc madd.c -o madd 

arraySort: arraySort.cpp
	g++ -g arraySort.cpp -o arraySort


bitonic: bitonic.cu
	nvcc -O3 bitonic.cu -o bitonic
        
quicksort: quicksort.cu 
	nvcc -O3 quicksort.cu -o quicksort
        
clean:
		rm -f madd arraySort bitonic quicksort
