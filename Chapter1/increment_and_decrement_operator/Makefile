CC = g++
TARGET = increment_and_decrement_operator.out
OBJS = increment_and_decrement_operator.o
SRCS = increment_and_decrement_operator.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
