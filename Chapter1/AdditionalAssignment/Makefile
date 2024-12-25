CC = g++
TARGET = additionalAssignment.out
OBJS = additionalAssignment.o
SRCS = additionalAssignment.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
