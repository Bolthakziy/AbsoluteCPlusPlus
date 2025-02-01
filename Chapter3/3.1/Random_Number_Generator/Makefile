CC = g++
TARGET = Random_Number_Generator.out
OBJS = Random_Number_Generator.o
SRCS = Random_Number_Generator.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
