build:
	gcc -o enc enc.c

clean:
	rm ./enc; rm ./key.out; rm ./crypt.out
