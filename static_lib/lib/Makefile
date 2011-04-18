lib = sample
objects = maths.o

lib$(lib): $(objects)
	$(AR) vrcs lib$(lib).a $(objects)
	$(RM) $(objects)

clean:
	$(RM) $(objects)

clean-all: clean
	$(RM) lib$(lib).a
