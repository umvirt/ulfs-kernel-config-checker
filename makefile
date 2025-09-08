build:
	gcc cmp.c -o cmp
	mkdir -v config
doc:
	markdown README.md > README.html
clean:
	rm -v cmp

