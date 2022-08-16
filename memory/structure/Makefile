all: array_of_objects object_of_arrays memory_usage

EXTRA_CFLAGS = -DHAVE_LINUX_PERF_EVENT_H -g

array_of_objects: array_of_objects.c
	gcc $(EXTRA_CFLAGS) array_of_objects.c -o array_of_objects

object_of_arrays: object_of_arrays.c
	gcc $(EXTRA_CFLAGS) object_of_arrays.c -o object_of_arrays

memory_usage: memory_usage.c
	gcc $(EXTRA_CFLAGS) memory_usage.c -o memory_usage

clean:
		rm -f object_of_arrays memory_usage array_of_objects 
