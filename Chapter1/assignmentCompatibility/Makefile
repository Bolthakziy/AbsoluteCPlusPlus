CC = g++
TARGET = assignmentCompatibility.out
OBJS = assignmentCompatibility.o
SRCS = assignmentCompatibility.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
