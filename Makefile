target : main.o clean
	gcc -lcurl main.c
clean :
	rm *.o