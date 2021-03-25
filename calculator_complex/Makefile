PROJECT = COMPLEX_CALCULATOR

SRC = src/complex_calculator.c


TEST = test/test_complex_calculator.c\
unity/unity.c

INC =  -Iinc\
-Iunity

$(PROJECT):all

.PHONY: run clean test doc all

all:$(SRC) $(TEST)
	gcc $(INC) $(TEST) $(SRC) -o $(PROJECT).out
	
test:$(SRC) $(TEST)
	gcc $(INC) $(TEST) $(SRC) -o $(PROJECT).out 
	./$(PROJECT).out

run: $(PROJECT)
	./$(PROJECT).out

clean:
	rm $(PROJECT).out
