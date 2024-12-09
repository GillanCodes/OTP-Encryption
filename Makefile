build:
	gcc -o enc enc.c; gcc -o dec dec.c

clean:
	rm ./key.out; rm ./crypt.out; rm ./decrypt.out

cleanbuilds:
	rm ./enc; rm ./dec
