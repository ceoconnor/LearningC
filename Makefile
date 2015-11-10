all: simplemath, complex, fibonacci

run:
	echo "Running: simplemath"
	./simplemath
	
	echo "Running: complex"
	./complex
	
	echo "Running fibonacci"
	./fibonacci

clean:
	rm -f hello hello.o

