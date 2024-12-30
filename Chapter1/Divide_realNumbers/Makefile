CC = g++
TARGET = Divide_realNumbers.out
OBJS = Divide_realNumbers.o
SRCS = Divide_realNumbers.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
