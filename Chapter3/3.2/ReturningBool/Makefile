CC = g++
TARGET = ReturningBool.out
OBJS = ReturningBool.o
SRCS = ReturningBool.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
