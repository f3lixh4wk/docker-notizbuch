# Dockerfile for building and running a container with an example of a c++ notebook application
#                              F. Germershausen Version 1 (003)

# Very small image with c/c++ compilers based on the alpine linux image (154MB)
FROM frolvlad/alpine-gxx

# Copy sources into the image
COPY Notizbuch /Notizbuch

# Change the directory to /Notizbuch/
WORKDIR /Notizbuch/

# Compile and create object files
RUN g++ -c NoteReader.cpp main.cpp

# Link object code and create executibles
RUN g++ -o Notizbuch NoteReader.o main.o

# Run the executible
CMD [ "./Notizbuch" ]