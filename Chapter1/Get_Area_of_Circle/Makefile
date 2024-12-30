CC = g++
TARGET = Get_Area_of_Circle.out
OBJS = Get_Area_of_Circle.o
SRCS = Get_Area_of_Circle.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(TARGET)
	rm $(OBJS)
