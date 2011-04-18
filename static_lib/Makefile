lib = libsample.a
exec = example

$(exec): $(lib) $(exec).o

$(lib):
	cd lib; make clean-all; make
	cp lib/$(lib) ./

run: $(exec)
	./$(exec)

clean:
	$(RM) $(exec).o $(lib)
	$(RM) $(exec)

clean-all: clean
	cd lib; make clean-all
