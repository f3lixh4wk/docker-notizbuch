# Dockerfile for building and running a container with an example of a c++ notebook application
#                              F. Germershausen Version 1 (001)

# Very small image with c/c++ compilers based on the alpine linux image (154MB)
FROM frolvlad/alpine-gxx

# Copy sources into the image
COPY Notizbuch /Notizbuch

# Change the directory to /Notizbuch/
WORKDIR /Notizbuch/

# Make Notizbuch executible
RUN g++ -o Notizbuch main.cpp NoteReader.cpp

# Run the executible
CMD [ "./Notizbuch" ]