CC = g++
TARGET = CommaOperator.out
OBJS = CommaOperator.o
SRCS = CommaOperator.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
