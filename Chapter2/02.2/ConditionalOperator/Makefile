CC = g++
TARGET = ConditionalOperator.out
OBJS = ConditionalOperator.o
SRCS = ConditionalOperator.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
