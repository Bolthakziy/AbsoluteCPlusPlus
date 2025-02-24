CC = g++
TARGET = voidWithReturn.out
OBJS = voidWithReturn.o
SRCS = voidWithReturn.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
