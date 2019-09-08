# recreate the executable file every time 
# the main.o and message.o was change
output: main.o message.o
	# Whenever there's a change in those file
	# we need to recompile them and we need to name
	# this executable output
	g++ main.o message.o -o output

# we need to recreate this every time main.o changes
main.o: main.cpp
	# compile main.ccp the -c flag says we don't need to creeate
	# it will keep the name of the file, but instead of cpp
	# it will remove the cpp and replace them with
	# .o
	g++ -c main.cpp

message.o: message.cpp message.h
	g++ -c message.cpp

clean:
	rm *.o output